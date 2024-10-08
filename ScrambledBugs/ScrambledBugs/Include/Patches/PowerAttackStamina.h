#pragma once

#include "PrecompiledHeader.h"



namespace ScrambledBugs::Patches
{
	class PowerAttackStamina
	{
	public:
		static void Load(bool& powerAttackStamina);

	private:
		static float HasAttackStaminaActor(Skyrim::ActorValueOwner* actorValueOwner, Skyrim::BGSAttackData* attackData);
		static float HasAttackStaminaPlayerCharacter(Skyrim::ActorValueOwner* actorValueOwner, Skyrim::BGSAttackData* attackData);

		static decltype(PowerAttackStamina::HasAttackStaminaActor)*           getAttackStaminaActor_;
		static decltype(PowerAttackStamina::HasAttackStaminaPlayerCharacter)* getAttackStaminaPlayerCharacter_;
	};
}
