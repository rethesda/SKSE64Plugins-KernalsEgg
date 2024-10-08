#include "Shared/PrecompiledHeader.h"

#include "Shared/Skyrim/A/Actor.h"

#include "Shared/Skyrim/A/AIProcess.h"
#include "Shared/Skyrim/Addresses.h"
#include "Shared/Skyrim/B/BipedAnim.h"
#include "Shared/Skyrim/B/BSTSmartPointer.h"
#include "Shared/Skyrim/E/ExtraDataList.h"
#include "Shared/Skyrim/I/InventoryEntryData.h"
#include "Shared/Skyrim/R/RefrInteraction.h"
#include "Shared/Skyrim/T/TESBoundObject.h"
#include "Shared/Skyrim/T/TESObjectARMO.h"
#include "Shared/Skyrim/T/TESObjectWEAP.h"
#include "Shared/Skyrim/T/TESRace.h"
#include "Shared/Skyrim/T/TESShout.h"
#include "Shared/Utility/TypeTraits.h"



namespace Skyrim
{
	bool Actor::AddSpellItem(SpellItem* spellItem)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::AddSpellItem)>::type>(
			Addresses::Actor::AddSpellItem()) };

		return function(this, spellItem);
	}

	bool Actor::CanKillMe(Actor* attacker) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::CanKillMe)>::type>(
			Addresses::Actor::CanKillMe()) };

		return function(this, attacker);
	}

	float Actor::DifficultyLevelAdjustHealthModifier(float damage, float onlyReduceDamage) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::DifficultyLevelAdjustHealthModifier)>::type>(
			Addresses::Actor::DifficultyLevelAdjustHealthModifier()) };

		return function(this, damage, onlyReduceDamage);
	}

	void Actor::ForceDetect(Actor* target)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::ForceDetect)>::type>(
			Addresses::Actor::ForceDetect()) };

		return function(this, target);
	}

	float Actor::GetActorValueModifier(Utility::Enumeration<ActorValueModifier, std::uint32_t> actorValueModifier, Utility::Enumeration<ActorValue, std::uint32_t> actorValue) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::GetActorValueModifier)>::type>(
			Addresses::Actor::GetActorValueModifier()) };

		return function(this, actorValueModifier, actorValue);
	}

	float Actor::GetArmorRating(InventoryEntryData* inventoryEntryData) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::GetArmorRating)>::type>(
			Addresses::Actor::GetArmorRating()) };

		return function(this, inventoryEntryData);
	}

	bhkCharacterController* Actor::GetCharacterController() const
	{
		auto* currentProcess = this->currentProcess;

		return currentProcess ? currentProcess->GetCharacterController() : nullptr;
	}

	ActorHandle Actor::GetCommandingActorHandle() const
	{
		auto* currentProcess = this->currentProcess;

		return currentProcess ? currentProcess->GetCommandingActorHandle() : ActorHandle{};
	}

	bool Actor::GetControllingActor(NiPointer<Actor>& controllingActor)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::GetControllingActor)>::type>(
			Addresses::Actor::GetControllingActor()) };

		return function(this, controllingActor);
	}

	InventoryEntryData* Actor::GetEquippedAmmunitionInventoryEntryData() const
	{
		auto* currentProcess = this->currentProcess;

		if (!currentProcess)
		{
			return nullptr;
		}

		auto* inventoryEntryData = currentProcess->GetAmmunitionInventoryEntryData();

		if (!inventoryEntryData)
		{
			return nullptr;
		}

		auto* boundObject = inventoryEntryData->boundObject;

		return (boundObject && boundObject->formType == FormType::kAmmunition) ? inventoryEntryData : nullptr;
	}

	TESObjectARMO* Actor::GetEquippedShield() const
	{
		const auto& thirdPersonBiped = this->GetThirdPersonBiped();

		if (!thirdPersonBiped)
		{
			return nullptr;
		}

		auto shieldBipedObject = thirdPersonBiped->GetShieldBipedObject();

		return shieldBipedObject ? static_cast<TESObjectARMO*>(shieldBipedObject->boundObject) : nullptr;
	}

	TESShout* Actor::GetEquippedShout() const
	{
		auto* selectedPower = this->selectedPower;

		return selectedPower && selectedPower->formType == FormType::kShout ? static_cast<TESShout*>(selectedPower) : nullptr;
	}

	TESObjectWEAP* Actor::GetEquippedWeapon(bool leftHand) const
	{
		auto* inventoryEntryData = this->GetEquippedWeaponInventoryEntryData(leftHand);

		return inventoryEntryData ? static_cast<TESObjectWEAP*>(inventoryEntryData->boundObject) : nullptr;
	}

	InventoryEntryData* Actor::GetEquippedWeaponInventoryEntryData(bool leftHand) const
	{
		auto* currentProcess = this->currentProcess;

		if (!currentProcess)
		{
			return nullptr;
		}

		auto* inventoryEntryData = leftHand ? currentProcess->GetLeftHandInventoryEntryData() : currentProcess->GetRightHandInventoryEntryData();

		if (!inventoryEntryData)
		{
			return nullptr;
		}

		auto* boundObject = inventoryEntryData->boundObject;

		return (boundObject && boundObject->formType == FormType::kWeapon) ? inventoryEntryData : nullptr;
	}

	EquipState Actor::GetEquipState(TESForm* form, ExtraDataList* rightHandExtraDataList, ExtraDataList* leftHandExtraDataList) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::GetEquipState)>::type>(
			Addresses::Actor::GetEquipState()) };

		return function(this, form, rightHandExtraDataList, leftHandExtraDataList);
	}

	NiAVObject* Actor::GetHeadNode() const
	{
		auto* currentProcess = this->currentProcess;

		return currentProcess ? currentProcess->GetHeadNode() : nullptr;
	}

	HitData* Actor::GetLastHitData() const
	{
		auto* currentProcess = this->currentProcess;

		return currentProcess ? currentProcess->GetLastHitData() : nullptr;
	}

	NiPoint3& Actor::GetLineOfSightLocation(NiPoint3& result, Utility::Enumeration<LineOfSightLocation, std::uint32_t> lineOfSightLocation) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::GetLineOfSightLocation)>::type>(
			Addresses::Actor::GetLineOfSightLocation()) };

		return function(this, result, lineOfSightLocation);
	}

	float Actor::GetMaximumWardPower() const
	{
		auto* currentProcess = this->currentProcess;

		return currentProcess ? currentProcess->GetMaximumWardPower() : -1.0F;
	}

	bool Actor::GetMount(NiPointer<Actor>& mount) const
	{
		if (this->booleanFlags.none(BooleanFlags::kMount))
		{
			BSTSmartPointer<RefrInteraction> referenceInteraction;

			if (this->GetInteraction(referenceInteraction))
			{
				NiPointer<Actor> targetActor;

				if (referenceInteraction->GetTargetActor(targetActor) && targetActor->booleanFlags.all(BooleanFlags::kMount))
				{
					mount = targetActor;

					return static_cast<bool>(mount);
				}
			}
		}

		mount.reset();

		return static_cast<bool>(mount);
	}

	bool Actor::GetRider(NiPointer<Actor>& rider) const
	{
		if (this->booleanFlags.all(BooleanFlags::kMount))
		{
			BSTSmartPointer<RefrInteraction> referenceInteraction;

			if (this->GetInteraction(referenceInteraction))
			{
				NiPointer<Actor> actor;

				if (referenceInteraction->GetActor(actor) && actor->booleanFlags.none(BooleanFlags::kMount))
				{
					rider = actor;

					return static_cast<bool>(rider);
				}
			}
		}

		rider.reset();

		return static_cast<bool>(rider);
	}

	SoulLevel Actor::GetSoulLevel() const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::GetSoulLevel)>::type>(
			Addresses::Actor::GetSoulLevel()) };

		return function(this);
	}

	NiAVObject* Actor::GetTorsoNode() const
	{
		auto* currentProcess = this->currentProcess;

		return currentProcess ? currentProcess->GetTorsoNode() : nullptr;
	}

	float Actor::GetWeaponDamage(InventoryEntryData* inventoryEntryData) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::GetWeaponDamage)>::type>(
			Addresses::Actor::GetWeaponDamage()) };

		return function(this, inventoryEntryData);
	}

	void Actor::HandleActorValueModified(Utility::Enumeration<ActorValue, std::uint32_t> actorValue, float oldValue, float deltaValue, Actor* source)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::HandleActorValueModified)>::type>(
			Addresses::Actor::HandleActorValueModified()) };

		function(this, actorValue, oldValue, deltaValue, source);
	}

	Actor::LineOfSightLocation Actor::IsActorInLineOfSight(Actor* target, float viewCone) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::IsActorInLineOfSight)>::type>(
			Addresses::Actor::IsActorInLineOfSight()) };

		return function(this, target, viewCone);
	}

	bool Actor::IsDualCasting() const
	{
		auto* currentProcess = this->currentProcess;

		return currentProcess ? currentProcess->IsDualCasting() : false;
	}

	bool Actor::IsKnockedOut() const
	{
		return this->actorState1.knockState != ActorState1::KnockState::kNormal;
	}

	bool Actor::IsNPC() const
	{
		auto* currentProcess = this->currentProcess;

		if (!currentProcess)
		{
			return this->UpdateIsNPC();
		}

		auto* cachedValues = currentProcess->cachedValues;

		if (!cachedValues)
		{
			return this->UpdateIsNPC();
		}

		return cachedValues->flags.all(CachedValues::Flags::kNPC) ? cachedValues->booleanValues.all(CachedValues::BooleanValues::kNPC) : this->UpdateIsNPC();
	}

	bool Actor::IsOnFlyingMount() const
	{
		NiPointer<Actor> mount;

		return this->GetMount(mount) && mount->race->raceFlags.all(TESRace::Flags::kFlies);
	}

	bool Actor::IsOnMount() const
	{
		return this->booleanFlags.none(BooleanFlags::kMount) && this->extraDataList.HasExtraData(ExtraDataType::kInteraction);
	}

	bool Actor::IsPlayerTeammate() const
	{
		return this->booleanBits.all(BooleanBits::kPlayerTeammate);
	}

	NiAVObject* Actor::IsPositionInLineOfSight(const NiPoint3& target, NiPoint3& result, float viewCone) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::IsPositionInLineOfSight)>::type>(
			Addresses::Actor::IsPositionInLineOfSight()) };

		return function(this, target, result, viewCone);
	}

	bool Actor::IsReferenceInLineOfSight(TESObjectREFR* target, float viewCone) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::IsReferenceInLineOfSight)>::type>(
			Addresses::Actor::IsReferenceInLineOfSight()) };

		return function(this, target, viewCone);
	}

	bool Actor::IsSneaking() const
	{
		return this->ActorState::IsSneaking() && !this->ActorState::IsSwimming() && !this->IsOnMount();
	}

	void Actor::ModifyActorValue(Utility::Enumeration<ActorValueModifier, std::uint32_t> actorValueModifier, Utility::Enumeration<ActorValue, std::uint32_t> actorValue, float value, Actor* source)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::ModifyActorValue)>::type>(
			Addresses::Actor::ModifyActorValue()) };

		function(this, actorValueModifier, actorValue, value, source);
	}

	void Actor::PickpocketAlarm(TESObjectREFR* target, TESBoundObject* boundObject, std::int32_t boundObjectCount)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::PickpocketAlarm)>::type>(
			Addresses::Actor::PickpocketAlarm()) };

		function(this, target, boundObject, boundObjectCount);
	}

	void Actor::RemoveActorValueModifiers(Utility::Enumeration<ActorValue, std::uint32_t> actorValue)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::RemoveActorValueModifiers)>::type>(
			Addresses::Actor::RemoveActorValueModifiers()) };

		function(this, actorValue);
	}

	void Actor::RemoveBasePerks()
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::RemoveBasePerks)>::type>(
			Addresses::Actor::RemoveBasePerks()) };

		function(this);
	}

	std::int32_t Actor::RequestDetectionLevel(Actor* target, Utility::Enumeration<DetectionPriority, std::uint32_t> detectionPriority) const
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::RequestDetectionLevel)>::type>(
			Addresses::Actor::RequestDetectionLevel()) };

		return function(this, target, detectionPriority);
	}

	void Actor::SetMaximumWardPower(float maximumWardPower)
	{
		auto* currentProcess = this->currentProcess;

		if (!currentProcess)
		{
			return;
		}

		currentProcess->SetMaximumWardPower(maximumWardPower);
	}

	void Actor::SetSelectedMagicItem(Utility::Enumeration<MagicSystem::CastingSource, std::uint32_t> castingSource, MagicItem* selectedMagicItem)
	{
		auto* function{ reinterpret_cast<
			Utility::TypeTraits::MakeFunctionPointer<decltype(&Actor::SetSelectedMagicItem)>::type>(
			Addresses::Actor::SetSelectedMagicItem()) };

		function(this, castingSource, selectedMagicItem);
	}
}
