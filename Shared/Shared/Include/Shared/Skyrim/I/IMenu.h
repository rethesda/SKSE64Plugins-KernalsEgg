#pragma once

#include "Shared/PrecompiledHeader.h"

#include "Shared/Skyrim/F/FxDelegateHandler.h"
#include "Shared/Skyrim/G/GPointer.h"
#include "Shared/Utility/Enumeration.h"



namespace Skyrim
{
	class FxDelegate;
	class GFxMovieView;
	class UIMessage;

	enum class UIMessageResult : std::uint32_t
	{
		kHandled = 0,
		kIgnore  = 1,
		kPassOn  = 2
	};
	static_assert(sizeof(UIMessageResult) == 0x4);

	class IMenu :
		public FxDelegateHandler // 0
	{
	public:
		enum class Flags : std::uint32_t
		{
			kNone                  = 0,
			kPauseGame             = 1U << 0,
			kModal                 = 1U << 4,
			kDisablePauseMenu      = 1U << 7,
			kAllowSaving           = 1U << 11,
			kInventoryItemMenu     = 1U << 13,
			kShowCursorWhenTopmost = 1U << 14,
			kCustomRendering       = 1U << 15,
			kApplicationMenu       = 1U << 17
		};
		static_assert(sizeof(Flags) == 0x4);

		// Override
		virtual ~IMenu() override; // 0

		// Override (FxDelegateHandler)
		virtual void Accept(CallbackProcessor* callbackProcessor) override; // 1

		// Add
		virtual void            Unknown2(IMenu*);                                        // 2
		virtual void            Unknown3(IMenu*);                                        // 3
		virtual UIMessageResult ProcessMessage(UIMessage& message);                      // 4
		virtual void            AdvanceMovie(float interval, std::uint32_t currentTime); // 5
		virtual void            PostDisplay();                                           // 6
		virtual void            PreDisplay();                                            // 7
		virtual void            Unknown8(IMenu*);                                        // 8

		// Member variables
		GPointer<GFxMovieView>                     movieView;     // 10
		std::int8_t                                depthPriority; // 18
		std::uint8_t                               padding19;     // 19
		std::uint16_t                              padding1A;     // 1A
		Utility::Enumeration<Flags, std::uint32_t> menuFlags;     // 1C
		std::uint32_t                              unknown20;     // 20
		std::uint32_t                              padding24;     // 24
		GPointer<FxDelegate>                       delegate;      // 28
	};
	static_assert(offsetof(IMenu, movieView) == 0x10);
	static_assert(offsetof(IMenu, depthPriority) == 0x18);
	static_assert(offsetof(IMenu, menuFlags) == 0x1C);
	static_assert(offsetof(IMenu, delegate) == 0x28);
	static_assert(sizeof(IMenu) == 0x30);
}
