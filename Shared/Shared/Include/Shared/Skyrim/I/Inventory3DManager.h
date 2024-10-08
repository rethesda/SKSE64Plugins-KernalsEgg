#pragma once

#include "Shared/PrecompiledHeader.h"

#include "Shared/Relocation/PreprocessorDirectives.h"
#include "Shared/Skyrim/B/BSTArray.h"
#include "Shared/Skyrim/B/BSTSingleton.h"
#include "Shared/Skyrim/E/ExtraDataList.h"
#include "Shared/Skyrim/M/MenuEventHandler.h"
#include "Shared/Skyrim/N/NiPointer.h"



namespace Skyrim
{
	class NiAVObject;
	class TESBoundObject;
	class TESForm;

	struct LoadedInventoryModel
	{
	public:
		// Member variables
		TESForm*              modelForm;        // 0
		TESBoundObject*       modelBoundObject; // 8
		NiPointer<NiAVObject> model3D;          // 10
		std::uint64_t         unknown18;        // 18
	};
	static_assert(offsetof(LoadedInventoryModel, modelForm) == 0x0);
	static_assert(offsetof(LoadedInventoryModel, modelBoundObject) == 0x8);
	static_assert(offsetof(LoadedInventoryModel, model3D) == 0x10);
	static_assert(sizeof(LoadedInventoryModel) == 0x20);

	class Inventory3DManager :
		public MenuEventHandler,                   // 0
		public BSTSingletonSDM<Inventory3DManager> // 10
	{
	public:
		// Override
		virtual ~Inventory3DManager() override; // 0

		// Override (MenuEventHandler)
		virtual bool CanProcess(InputEvent* inputEvent) override;                  // 1
		virtual bool ProcessThumbstick(ThumbstickEvent* thumbstickEvent) override; // 3
		virtual bool ProcessMouseMove(MouseMoveEvent* mouseMoveEvent) override;    // 4

		// Non-member functions
		static Inventory3DManager* GetSingleton();

		// Member variables
		std::uint8_t                           padding11;             // 11
		std::uint16_t                          padding12;             // 12
		std::uint32_t                          unknown14;             // 14
		std::uint64_t                          unknown18;             // 18
		std::uint64_t                          unknown20;             // 20
		std::uint32_t                          unknown28;             // 28
		float                                  zoom;                  // 2C
		std::uint64_t                          unknown30;             // 30
		std::uint64_t                          unknown38;             // 38
		ExtraDataList                          extraDataList;         // 40
		BSTSmallArray<LoadedInventoryModel, 7> loadedInventoryModels; // 58, 60
		std::uint64_t                          unknown150;            // 148, 150
		std::uint64_t                          unknown158;            // 150, 158
		std::uint64_t                          unknown160;            // 158, 160
	};
	static_assert(offsetof(Inventory3DManager, zoom) == 0x2C);
	static_assert(offsetof(Inventory3DManager, extraDataList) == 0x40);
	static_assert(offsetof(Inventory3DManager, loadedInventoryModels) == SKYRIM_RELOCATE(0x58, 0x60));
	static_assert(sizeof(Inventory3DManager) == SKYRIM_RELOCATE(0x160, 0x168));
}
