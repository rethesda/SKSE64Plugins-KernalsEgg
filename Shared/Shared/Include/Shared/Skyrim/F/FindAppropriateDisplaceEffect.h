#pragma once

#include "Shared/PrecompiledHeader.h"

#include "Shared/Skyrim/M/MagicTarget.h"



namespace Skyrim
{
	class MagicItem;
	class SpellItem;

	class FindAppropriateDisplaceEffect :
		public MagicTarget::ForEachActiveEffectVisitor // 0
	{
	public:
		// Override
		virtual ~FindAppropriateDisplaceEffect() override = default; // 0

		// Override (MagicTarget::ForEachActiveEffectVisitor)
		virtual ForEachResult operator()(ActiveEffect* activeEffect) override; // 1

		// Member variables
		MagicItem* displacementMagicItem{ nullptr }; // 8
		SpellItem* addiction{ nullptr };             // 10
		bool       displace{ false };                // 18
	};
	static_assert(offsetof(FindAppropriateDisplaceEffect, displacementMagicItem) == 0x8);
	static_assert(offsetof(FindAppropriateDisplaceEffect, addiction) == 0x10);
	static_assert(offsetof(FindAppropriateDisplaceEffect, displace) == 0x18);
	static_assert(sizeof(FindAppropriateDisplaceEffect) == 0x20);
}
