#include "PrecompiledHeader.h"

#include "Fixes/LeftHandPowerAttacks.h"

#include "Addresses.h"
#include "Shared/Utility/Memory.h"



namespace ScrambledBugs::Fixes
{
	void LeftHandPowerAttacks::Load(bool& leftHandPowerAttacks)
	{
		Utility::Memory::SafeWriteAbsoluteJump(
			Addresses::Fixes::LeftHandPowerAttacks::GetAttackStamina,
			reinterpret_cast<std::uintptr_t>(std::addressof(LeftHandPowerAttacks::GetAttackStamina)));
	}

	float LeftHandPowerAttacks::GetAttackStamina(Skyrim::ActorValueOwner* actorValueOwner, Skyrim::BGSAttackData* attackData)
	{
		// actorValueOwner != nullptr
		// attackData != nullptr

		auto attackDataFlags = attackData->attackDataFlags;
		auto powerAttack     = attackDataFlags.all(Skyrim::BGSAttackData::Flags::kPowerAttack);

		if (attackDataFlags.all(Skyrim::BGSAttackData::Flags::kBashAttack))
		{
			static auto* staminaPowerBashBase = Skyrim::GameSettingCollection::InitializeSetting("fStaminaPowerBashBase");
			static auto* staminaBashBase      = Skyrim::GameSettingCollection::InitializeSetting("fStaminaBashBase");

			auto bashAttackStamina = powerAttack ? staminaPowerBashBase->GetFloat() : staminaBashBase->GetFloat();

			return bashAttackStamina * attackData->staminaMultiplier;
		}
		else
		{
			if (!powerAttack)
			{
				return 0.0F;
			}

			auto* actor                = static_cast<Skyrim::Actor*>(actorValueOwner);
			auto* equippedWeapon       = actor->GetEquippedWeapon(attackDataFlags.all(Skyrim::BGSAttackData::Flags::kLeftAttack));
			auto  equippedWeaponWeight = equippedWeapon ? equippedWeapon->weight : 1.0F;

			if (!equippedWeapon)
			{
				equippedWeapon = Skyrim::TESObjectWEAP::GetUnarmedWeapon();
			}

			static auto* staminaAttackWeaponBase       = Skyrim::GameSettingCollection::InitializeSetting("fStaminaAttackWeaponBase");
			static auto* staminaAttackWeaponMultiplier = Skyrim::GameSettingCollection::InitializeSetting("fStaminaAttackWeaponMult");
			static auto* powerAttackStaminaPenalty     = Skyrim::GameSettingCollection::InitializeSetting("fPowerAttackStaminaPenalty");

			auto powerAttackStamina = (staminaAttackWeaponBase->GetFloat() + (equippedWeaponWeight * staminaAttackWeaponMultiplier->GetFloat())) * powerAttackStaminaPenalty->GetFloat();

			Skyrim::BGSEntryPoint::HandleEntryPoint(Skyrim::BGSEntryPoint::EntryPoint::kModifyPowerAttackStamina, actor, equippedWeapon, std::addressof(powerAttackStamina));

			return powerAttackStamina * attackData->staminaMultiplier;
		}
	}
}
