#pragma once

#include "PrecompiledHeader.h"

#include "Shared/Utility/Enumeration.h"



namespace ScrambledBugs
{
	class Serialization
	{
	public:
		enum : std::uint32_t
		{
			kUniqueID = 'ECF' // SMBL
		};

		struct EnchantmentCost
		{
		public:
			enum : std::uint32_t
			{
				kType    = 'ENCH', // ECST
				kVersion = 1
			};

			bool LoadGame(SKSE::SerializationInterface* serializationInterface);
			bool SaveGame(SKSE::SerializationInterface* serializationInterface, Skyrim::MagicItem* magicItem);

			Skyrim::FormID                                                      formID;               // 0
			std::int32_t                                                        enchantmentCost;      // 4
			Utility::Enumeration<Skyrim::EnchantmentItem::Flags, std::uint32_t> enchantmentItemFlags; // 8
		};
		static_assert(offsetof(EnchantmentCost, formID) == 0x0);
		static_assert(offsetof(EnchantmentCost, enchantmentCost) == 0x4);
		static_assert(offsetof(EnchantmentCost, enchantmentItemFlags) == 0x8);
		static_assert(sizeof(EnchantmentCost) == 0xC);

		static void LoadGame(SKSE::SerializationInterface* serializationInterface);
		static void SaveGame(SKSE::SerializationInterface* serializationInterface);
	};
}
