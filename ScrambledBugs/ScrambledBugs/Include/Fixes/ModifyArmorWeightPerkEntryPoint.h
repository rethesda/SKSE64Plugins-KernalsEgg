#pragma once

#include "PrecompiledHeader.h"



namespace ScrambledBugs::Fixes
{
	class ModifyArmorWeightPerkEntryPoint
	{
	public:
		static void Load(bool& modifyArmorWeightPerkEntryPoint);

	private:
		static void ApplyPerkEntry(Skyrim::BGSEntryPointPerkEntry* entryPointPerkEntry, Skyrim::Actor* perkOwner);
		static void RemovePerkEntry(Skyrim::BGSEntryPointPerkEntry* entryPointPerkEntry, Skyrim::Actor* perkOwner);

		static float GetInventoryWeight(Skyrim::InventoryChanges* inventoryChanges);

		static decltype(ModifyArmorWeightPerkEntryPoint::ApplyPerkEntry)*  applyPerkEntry_;
		static decltype(ModifyArmorWeightPerkEntryPoint::RemovePerkEntry)* removePerkEntry_;
	};
}
