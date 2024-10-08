#include "Shared/PrecompiledHeader.h"

#include "Shared/Skyrim/Addresses.h"

#include "Shared/Relocation/AddressLibrary.h"
#include "Shared/Relocation/PreprocessorDirectives.h"



namespace Skyrim
{
	namespace Addresses
	{
		namespace AbsorbEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16366D0, 1.6.318.0: SkyrimSE.exe + 0x172C3F0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257544, 205801)) };

				return address;
			}
		}

		namespace AccumulatingValueModifierEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1636880, 1.6.318.0: SkyrimSE.exe + 0x172C5A0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257549, 205803)) };

				return address;
			}
		}

		namespace ActiveEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1636EE0, 1.6.318.0: SkyrimSE.exe + 0x172CD18</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257579, 205813)) };

				return address;
			}
		}

		namespace ActiveEffectFactory
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F26050, 1.6.318.0: SkyrimSE.exe + 0x2FC0440</summary>
			std::uintptr_t CheckTargetFunctions()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(516694, 402940)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F25D50, 1.6.318.0: SkyrimSE.exe + 0x2FC0140</summary>
			std::uintptr_t InstantiateFunctions()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(516691, 402892)) };

				return address;
			}
		}

		namespace Actor
		{
			namespace MagicTarget
			{
				/// <summary>1.5.97.0: SkyrimSE.exe + 0x1656058, 1.6.318.0: SkyrimSE.exe + 0x174C360</summary>
				std::uintptr_t VirtualFunctionTable()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(260542, 207519)) };

					return address;
				}
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x62F560, 1.6.318.0: SkyrimSE.exe + 0x655190</summary>
			std::uintptr_t AddSpellItem()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37771, 38716)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5D0F40, 1.6.318.0: SkyrimSE.exe + 0x5F5520</summary>
			std::uintptr_t CanKillMe()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36247, 37229)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5E4800, 1.6.318.0: SkyrimSE.exe + 0x60A730</summary>
			std::uintptr_t DifficultyLevelAdjustHealthModifier()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36506, 37506)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5FCA00, 1.6.318.0: SkyrimSE.exe + 0x623960</summary>
			std::uintptr_t ForceDetect()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36749, 37765)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x621350, 1.6.318.0: SkyrimSE.exe + 0x6468C0</summary>
			std::uintptr_t GetActorValueModifier()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37524, 38469)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x692CD0, 1.6.318.0: SkyrimSE.exe + 0x6BA9A0</summary>
			std::uintptr_t GetArmorRating()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(39175, 40249)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x62F170, 1.6.318.0: SkyrimSE.exe + 0x654CC0</summary>
			std::uintptr_t GetControllingActor()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37762, 38707)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x88B6B0, 1.6.318.0: SkyrimSE.exe + 0x8BAA10</summary>
			std::uintptr_t GetEquipState()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(50945, 51822)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5FD5B0, 1.6.318.0: SkyrimSE.exe + 0x624490</summary>
			std::uintptr_t GetLineOfSightLocation()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36755, 37771)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x6348A0, 1.6.318.0: SkyrimSE.exe + 0x65A970</summary>
			std::uintptr_t GetSoulLevel()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37862, 38817)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x693050, 1.6.318.0: SkyrimSE.exe + 0x6BAD10</summary>
			std::uintptr_t GetWeaponDamage()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(39179, 40253)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x6213D0, 1.6.318.0: SkyrimSE.exe + 0x646940</summary>
			std::uintptr_t HandleActorValueModified()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37525, 38470)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5FCCB0, 1.6.318.0: SkyrimSE.exe + 0x623C10</summary>
			std::uintptr_t IsActorInLineOfSight()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36752, 37768)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5FD2C0, 1.6.318.0: SkyrimSE.exe + 0x6241F0</summary>
			std::uintptr_t IsPositionInLineOfSight()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36754, 37770)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5FCB90, 1.6.318.0: SkyrimSE.exe + 0x623AF0</summary>
			std::uintptr_t IsReferenceInLineOfSight()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36751, 37767)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x621120, 1.6.318.0: SkyrimSE.exe + 0x6466A0</summary>
			std::uintptr_t ModifyActorValue()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37523, 38468)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5DE160, 1.6.318.0: SkyrimSE.exe + 0x603C30</summary>
			std::uintptr_t PickpocketAlarm()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36428, 37423)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x621590, 1.6.318.0: SkyrimSE.exe + 0x646B00</summary>
			std::uintptr_t RemoveActorValueModifiers()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37527, 38476)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5F9F20, 1.6.318.0: SkyrimSE.exe + 0x620DE0</summary>
			std::uintptr_t RemoveBasePerks()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36695, 37704)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5FC9A0, 1.6.318.0: SkyrimSE.exe + 0x623900</summary>
			std::uintptr_t RequestDetectionLevel()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(36748, 37764)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x632270, 1.6.318.0: SkyrimSE.exe + 0x658170</summary>
			std::uintptr_t SetSelectedMagicItem()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37819, 38768)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1655640, 1.6.318.0: SkyrimSE.exe + 0x174B948</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(260538, 207511)) };

				return address;
			}
		}

		namespace ActorEquipManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x637A80, 1.6.318.0: SkyrimSE.exe + 0x65D710</summary>
			std::uintptr_t EquipBoundObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37938, 38894)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2EC4838, 1.6.318.0: SkyrimSE.exe + 0x2F5EF88</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514494, 400636)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x638190, 1.6.318.0: SkyrimSE.exe + 0x65DF00</summary>
			std::uintptr_t UnequipBoundObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(37945, 38901)) };

				return address;
			}
		}

		namespace ActorValueInfo
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3E1420, 1.6.318.0: SkyrimSE.exe + 0x3FA090</summary>
			std::uintptr_t GetSingleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(26569, 27202)) };

				return address;
			}
		}

		namespace ActorValueOwner
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3E5250, 1.6.318.0: SkyrimSE.exe + 0x3FDF00</summary>
			std::uintptr_t GetClampedActorValue()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(26616, 27284)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3C1700, 1.6.318.0: SkyrimSE.exe + 0x3D9160</summary>
			std::uintptr_t GetDualCastingEffectiveness()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(25931, 26518)) };

				return address;
			}
		}

		namespace AIFormulas
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3BCF40, 1.6.318.0: SkyrimSE.exe + 0x3D4820</summary>
			std::uintptr_t ComputePickpocketSuccess()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(25822, 26379)) };

				return address;
			}
		}

		namespace AITimer
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F3A644, 1.6.318.0: SkyrimSE.exe + 0x2FD530C</summary>
			std::uintptr_t Timer()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(517597, 404125)) };

				return address;
			}
		}

		namespace BanishEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163D8D0, 1.6.318.0: SkyrimSE.exe + 0x1733940</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258030, 206133)) };

				return address;
			}
		}

		namespace BGSCreatedObjectManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EBEAE8, 1.6.318.0: SkyrimSE.exe + 0x1F592E8</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514172, 400320)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x59F6E0, 1.6.318.0: SkyrimSE.exe + 0x5C0B20</summary>
			std::uintptr_t DecrementReference()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(35269, 36171)) };

				return address;
			}
		}

		namespace BGSDecalManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EC4320, 1.6.318.0: SkyrimSE.exe + 0x1F5EA88</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514414, 400561)) };

				return address;
			}
		}

		namespace BGSDefaultObjectManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xF7210, 1.6.318.0: SkyrimSE.exe + 0x182100</summary>
			std::uintptr_t GetSingleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(10878, 13894)) };

				return address;
			}
		}

		namespace BGSEntryPoint
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1DD2EA0, 1.6.318.0: SkyrimSE.exe + 0x1E66F90</summary>
			std::uintptr_t EntryPoints()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(675707, 368994)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x32ECE0, 1.6.318.0: SkyrimSE.exe + 0x3444C0</summary>
			std::uintptr_t HandleEntryPoint()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(23073, 23526)) };

				return address;
			}
		}

		namespace BGSEntryPointFunction
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1DD3BA0, 1.6.318.0: SkyrimSE.exe + 0x1E67C90</summary>
			std::uintptr_t EntryPointFunctionArgumentCounts()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(502187, 369210)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x32EEE0, 1.6.318.0: SkyrimSE.exe + 0x3446C0</summary>
			std::uintptr_t ExecuteFunction()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(23075, 23528)) };

				return address;
			}
		}

		namespace BGSEntryPointPerkEntry
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1598610, 1.6.318.0: SkyrimSE.exe + 0x1690078</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(241053, 195299)) };

				return address;
			}
		}

		namespace BGSEquipSlot
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3314E0, 1.6.318.0: SkyrimSE.exe + 0x346DE0</summary>
			std::uintptr_t CheckForSlotConflict()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(23148, 23605)) };

				return address;
			}
		}

		namespace BGSEquipType
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x186D60, 1.6.318.0: SkyrimSE.exe + 0x190BE0</summary>
			std::uintptr_t GetFormAsEquipType()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14123, 14218)) };

				return address;
			}
		}

		namespace BGSFootstepManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F27150, 1.6.318.0: SkyrimSE.exe + 0x2FC1C20</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(517045, 403553)) };

				return address;
			}
		}

		namespace BGSImpactDataSet
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2C3490, 1.6.318.0: SkyrimSE.exe + 0x2D6460</summary>
			std::uintptr_t GetImpactData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(20408, 20860)) };

				return address;
			}
		}

		namespace BGSImpactManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5A2930, 1.6.318.0: SkyrimSE.exe + 0x5C3AD0</summary>
			std::uintptr_t PlaySound()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(35317, 36212)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F003F0, 1.6.318.0: SkyrimSE.exe + 0x2F9AB00</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(515123, 401262)) };

				return address;
			}
		}

		namespace BGSMaterialType
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2C73F0, 1.6.318.0: SkyrimSE.exe + 0x2DA4D0</summary>
			std::uintptr_t GetMaterialTypeFromMaterialID()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(20529, 20968)) };

				return address;
			}
		}

		namespace BGSPerk
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3386A0, 1.6.318.0: SkyrimSE.exe + 0x34EAC0</summary>
			std::uintptr_t ApplyPerk()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(23353, 23822)) };

				return address;
			}
		}

		namespace BGSSaveGameBuffer
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x599DB0, 1.6.318.0: SkyrimSE.exe + 0x5BB190</summary>
			std::uintptr_t SaveData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(35163, 36053)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5999B0, 1.6.318.0: SkyrimSE.exe + 0x5BAD90</summary>
			std::uintptr_t SaveFormID()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(35158, 36048)) };

				return address;
			}
		}

		namespace bhkNiCollisionObject
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1424F0, 1.6.318.0: SkyrimSE.exe + 0x2B20F0</summary>
			std::uintptr_t GetRigidBody()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(12784, 20014)) };

				return address;
			}
		}

		namespace bhkWorld
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x154064C, 1.6.318.0: SkyrimSE.exe + 0x1637AA0</summary>
			std::uintptr_t Scale()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(231896, 188105)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1536BA0, 1.6.318.0: SkyrimSE.exe + 0x162DF48</summary>
			std::uintptr_t ScaleInverse()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(230692, 187407)) };

				return address;
			}
		}

		namespace BoundItemEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16377C8, 1.6.318.0: SkyrimSE.exe + 0x172D608</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257627, 205842)) };

				return address;
			}
		}

		namespace BSAudioManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xBEE580, 1.6.318.0: SkyrimSE.exe + 0xC132D0</summary>
			std::uintptr_t GetSingleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66391, 67652)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xBEF020, 1.6.318.0: SkyrimSE.exe + 0xC13F50</summary>
			std::uintptr_t GetSoundHandleFromName()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66403, 67665)) };

				return address;
			}
		}

		namespace BSFixedString
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC28BF0, 1.6.318.0: SkyrimSE.exe + 0xC4E920</summary>
			std::uintptr_t Initialize()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(67819, 69161)) };

				return address;
			}
		}

		namespace BSInputDeviceManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F257A8, 1.6.318.0: SkyrimSE.exe + 0x2FBFD88</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(516574, 402776)) };

				return address;
			}
		}

		namespace BSPointerHandleManagerInterface
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EE670, 1.6.318.0: SkyrimSE.exe + 0x1FA210</summary>
			std::uintptr_t GetHandle()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(15967, 16212)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1329D0, 1.6.318.0: SkyrimSE.exe + 0x139160</summary>
			std::uintptr_t GetSmartPointer()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(12204, 12332)) };

				return address;
			}
		}

		namespace BSReadWriteLock
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC072D0, 1.6.318.0: SkyrimSE.exe + 0xC2BEF0</summary>
			std::uintptr_t ReadLock()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66976, 68233)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC07590, 1.6.318.0: SkyrimSE.exe + 0xC2C1B0</summary>
			std::uintptr_t ReadUnlock()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66982, 68239)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC07350, 1.6.318.0: SkyrimSE.exe + 0xC2BF70</summary>
			std::uintptr_t WriteLock()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66977, 68234)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC075A0, 1.6.318.0: SkyrimSE.exe + 0xC2C1C0</summary>
			std::uintptr_t WriteUnlock()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66983, 68240)) };

				return address;
			}
		}

		namespace BSSoundHandle
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xBED530, 1.6.318.0: SkyrimSE.exe + 0xC12290</summary>
			std::uintptr_t Play()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66355, 67616)) };

				return address;
			}
		}

		namespace BSStringPool
		{
			namespace Entry
			{
				/// <summary>1.5.97.0: SkyrimSE.exe + 0xC29E80, 1.6.318.0: SkyrimSE.exe + 0xC4FCF0</summary>
				std::uintptr_t Release()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(67847, 69192)) };

					return address;
				}
			}
		}

		namespace CalmEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163D9E8, 1.6.318.0: SkyrimSE.exe + 0x1733A58</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258031, 206135)) };

				return address;
			}
		}

		namespace Character
		{
			namespace MagicTarget
			{
				/// <summary>1.5.97.0: SkyrimSE.exe + 0x165E468, 1.6.318.0: SkyrimSE.exe + 0x1754098</summary>
				std::uintptr_t VirtualFunctionTable()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(261401, 207894)) };

					return address;
				}
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x165DA40, 1.6.318.0: SkyrimSE.exe + 0x1753670</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(261397, 207886)) };

				return address;
			}
		}

		namespace CloakEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1637990, 1.6.318.0: SkyrimSE.exe + 0x172D7F8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257635, 205849)) };

				return address;
			}
		}

		namespace CommandEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1637C10, 1.6.318.0: SkyrimSE.exe + 0x172DA50</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257648, 205855)) };

				return address;
			}
		}

		namespace CommandSummonedEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1637D58, 1.6.318.0: SkyrimSE.exe + 0x172DB98</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257652, 205857)) };

				return address;
			}
		}

		namespace ConcussionEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1638C98, 1.6.318.0: SkyrimSE.exe + 0x172EB80</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257699, 205885)) };

				return address;
			}
		}

		namespace Console
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F4C31C, 1.6.318.0: SkyrimSE.exe + 0x2FE6FE4</summary>
			std::uintptr_t SelectedReferenceHandle()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(519394, 504099)) };

				return address;
			}
		}

		namespace ConsoleLog
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x85C290, 1.6.318.0: SkyrimSE.exe + 0x889650</summary>
			std::uintptr_t PrintLine()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(50179, 51109)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F000F0, 1.6.318.0: SkyrimSE.exe + 0x2F9A800</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(515064, 401203)) };

				return address;
			}
		}

		namespace ContainerMenu
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F4C328, 1.6.318.0: SkyrimSE.exe + 0x2FE6FF0</summary>
			std::uintptr_t ContainerMode()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(519396, 405937)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1DF3B98, 1.6.318.0: SkyrimSE.exe + 0x1E87F40</summary>
			std::uintptr_t MenuName()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(509954, 382742)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F4C3F0, 1.6.318.0: SkyrimSE.exe + 0x2FE70B8</summary>
			std::uintptr_t TargetReferenceHandle()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(519421, 405962)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16AD8F0, 1.6.318.0: SkyrimSE.exe + 0x17A0BC0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(268222, 215061)) };

				return address;
			}
		}

		namespace CraftingSubMenus
		{
			namespace EnchantConstructMenu
			{
				namespace CreateEffectFunctor
				{
					/// <summary>1.5.97.0: SkyrimSE.exe + 0x16AFEB8, 1.6.318.0: SkyrimSE.exe + 0x17A2ED8</summary>
					std::uintptr_t VirtualFunctionTable()
					{
						static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(268497, 215178)) };

						return address;
					}
				}
			}
		}

		namespace CureEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1637EC8, 1.6.318.0: SkyrimSE.exe + 0x172DD08</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257657, 205859)) };

				return address;
			}
		}

		namespace DarknessEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1637FC0, 1.6.318.0: SkyrimSE.exe + 0x172DE00</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257659, 205861)) };

				return address;
			}
		}

		namespace DemoralizeEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163D6A0, 1.6.318.0: SkyrimSE.exe + 0x1733710</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258028, 206129)) };

				return address;
			}
		}

		namespace DetectLifeEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16380F8, 1.6.318.0: SkyrimSE.exe + 0x172DF10</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257661, 205863)) };

				return address;
			}
		}

		namespace DisarmEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16381F0, 1.6.318.0: SkyrimSE.exe + 0x172E048</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257663, 205865)) };

				return address;
			}
		}

		namespace DisguiseEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1638438, 1.6.318.0: SkyrimSE.exe + 0x172E2C8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257673, 205870)) };

				return address;
			}
		}

		namespace DispelEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1638558, 1.6.318.0: SkyrimSE.exe + 0x172E3E8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257676, 205872)) };

				return address;
			}
		}

		namespace DualValueModifierEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16386B8, 1.6.318.0: SkyrimSE.exe + 0x172E548</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257681, 205876)) };

				return address;
			}
		}

		namespace EffectArchetypes
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1DB0020, 1.6.318.0: SkyrimSE.exe + 0x1E44020</summary>
			std::uintptr_t Archetypes()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(500623, 358289)) };

				return address;
			}
		}

		namespace EffectItem
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xF8630, 1.6.318.0: SkyrimSE.exe + 0x1029C0</summary>
			std::uintptr_t GetCost()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(10929, 11017)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xF87F0, 1.6.318.0: SkyrimSE.exe + 0x102B50</summary>
			std::uintptr_t ResetCost()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(10932, 11021)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xF86A0, 1.6.318.0: SkyrimSE.exe + 0x102A30</summary>
			std::uintptr_t SetConditions()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(10930, 11018)) };

				return address;
			}
		}

		namespace EffectSetting
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3C1250, 1.6.318.0: SkyrimSE.exe + 0x3D8CD0</summary>
			std::uintptr_t GetCost()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(25921, 26504)) };

				return address;
			}
		}

		namespace EnchantmentItem
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3C0DE0, 1.6.318.0: SkyrimSE.exe + 0x3D8810</summary>
			std::uintptr_t ModifyPower()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(25910, 26493)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x15217E0, 1.6.318.0: SkyrimSE.exe + 0x161B920</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(228570, 186389)) };

				return address;
			}
		}

		namespace EnhanceWeaponEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1647FF0, 1.6.318.0: SkyrimSE.exe + 0x173EE50</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(259119, 206860)) };

				return address;
			}
		}

		namespace EtherealizationEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1638800, 1.6.318.0: SkyrimSE.exe + 0x172E690</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257683, 205878)) };

				return address;
			}
		}

		namespace ExtraDataList
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x126650, 1.6.318.0: SkyrimSE.exe + 0x12D230</summary>
			std::uintptr_t IsQuestBoundObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(11913, 12052)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x111D30, 1.6.318.0: SkyrimSE.exe + 0x11DC40</summary>
			std::uintptr_t SetLockList()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(11517, 11663)) };

				return address;
			}
		}

		namespace FindAppropriateDisplaceEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1636FC8, 1.6.318.0: SkyrimSE.exe + 0x172CE00</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257581, 205817)) };

				return address;
			}
		}

		namespace FindMaxMagnitudeVisitor
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1636990, 1.6.318.0: SkyrimSE.exe + 0x172C6B0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257550, 205805)) };

				return address;
			}
		}

		namespace FixedStrings
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x104AD0, 1.6.318.0: SkyrimSE.exe + 0x10EA60</summary>
			std::uintptr_t GetSingleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(11308, 11437)) };

				return address;
			}
		}

		namespace FrenzyEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163DB00, 1.6.318.0: SkyrimSE.exe + 0x1733B70</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258032, 206137)) };

				return address;
			}
		}

		namespace FxDelegate
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xED6AC0, 1.6.318.0: SkyrimSE.exe + 0xF1E470</summary>
			std::uintptr_t Invoke()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80520, 82640)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xED6A30, 1.6.318.0: SkyrimSE.exe + 0xF1E3E0</summary>
			std::uintptr_t RegisterDelegateHandler()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80518, 82638)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xED6A80, 1.6.318.0: SkyrimSE.exe + 0xF1E430</summary>
			std::uintptr_t UnregisterDelegateHandler()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80519, 82639)) };

				return address;
			}
		}

		namespace FxDelegateArguments
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xED6990, 1.6.318.0: SkyrimSE.exe + 0xF1E340</summary>
			std::uintptr_t Respond()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80516, 82636)) };

				return address;
			}
		}

		namespace GameplayFormulas
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3C11E0, 1.6.318.0: SkyrimSE.exe + 0x3D8C60</summary>
			std::uintptr_t CalculatePickpocketSkillUse()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(25919, 26502)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3C1200, 1.6.318.0: SkyrimSE.exe + 0x3D8C80</summary>
			std::uintptr_t GetDifficultyMultiplier()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(25920, 26503)) };

				return address;
			}
		}

		namespace GameSettingCollection
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1FCA30, 1.6.318.0: SkyrimSE.exe + 0x325330</summary>
			std::uintptr_t GetSetting()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(16195, 22788)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xF9980, 1.6.318.0: SkyrimSE.exe + 0x103B70</summary>
			std::uintptr_t InitializeCollection()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(10962, 11040)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2EC58B0, 1.6.318.0: SkyrimSE.exe + 0x2F60000</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514622, 400782)) };

				return address;
			}
		}

		namespace GetMagicItemDescriptionFunctor
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16B4AD8, 1.6.318.0: SkyrimSE.exe + 0x17A7788</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(269117, 215554)) };

				return address;
			}
		}

		namespace GFxValue
		{
			namespace ObjectInterface
			{
				/// <summary>1.5.97.0: SkyrimSE.exe + 0xEC83A0, 1.6.318.0: SkyrimSE.exe + 0xF0AA10</summary>
				std::uintptr_t AttachMovie()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80197, 82219)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xEC9490, 1.6.318.0: SkyrimSE.exe + 0xF0BC40</summary>
				std::uintptr_t DeleteMember()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80207, 82230)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xEC9BD0, 1.6.318.0: SkyrimSE.exe + 0xF0C310</summary>
				std::uintptr_t GetArraySize()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80214, 82237)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xEC9C20, 1.6.318.0: SkyrimSE.exe + 0xF0C370</summary>
				std::uintptr_t GetDisplayInformation()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80216, 82239)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xEC9F30, 1.6.318.0: SkyrimSE.exe + 0xF0C690</summary>
				std::uintptr_t GetElement()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80218, 82241)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECA150, 1.6.318.0: SkyrimSE.exe + 0xF0C8B0</summary>
				std::uintptr_t GetMember()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80222, 82245)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECA320, 1.6.318.0: SkyrimSE.exe + 0xF0CA70</summary>
				std::uintptr_t GetText()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80225, 82248)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECA570, 1.6.318.0: SkyrimSE.exe + 0xF0CCC0</summary>
				std::uintptr_t GotoAndPlay()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80230, 82253)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECA620, 1.6.318.0: SkyrimSE.exe + 0xF0CD60</summary>
				std::uintptr_t HasMember()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80231, 82254)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECA860, 1.6.318.0: SkyrimSE.exe + 0xF0CFD0</summary>
				std::uintptr_t Invoke()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80233, 82256)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECB080, 1.6.318.0: SkyrimSE.exe + 0xF0D6A0</summary>
				std::uintptr_t ObjectAddReference()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80244, 82269)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECB0E0, 1.6.318.0: SkyrimSE.exe + 0xF0D700</summary>
				std::uintptr_t ObjectRelease()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80245, 82270)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECB300, 1.6.318.0: SkyrimSE.exe + 0xF0D920</summary>
				std::uintptr_t PushBack()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80248, 82273)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECB6C0, 1.6.318.0: SkyrimSE.exe + 0xF0DDB0</summary>
				std::uintptr_t RemoveElements()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80252, 82280)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECBD20, 1.6.318.0: SkyrimSE.exe + 0xF0E120</summary>
				std::uintptr_t SetArraySize()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80261, 82285)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECBDB0, 1.6.318.0: SkyrimSE.exe + 0xF0E1A0</summary>
				std::uintptr_t SetDisplayInformation()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80263, 82287)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECC960, 1.6.318.0: SkyrimSE.exe + 0xF0EF70</summary>
				std::uintptr_t SetElement()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80265, 82289)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECCBA0, 1.6.318.0: SkyrimSE.exe + 0xF0F1C0</summary>
				std::uintptr_t SetMember()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80268, 82292)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECCCF0, 1.6.318.0: SkyrimSE.exe + 0xF0F2C0</summary>
				std::uintptr_t SetText()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80270, 82293)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECCDB0, 1.6.318.0: SkyrimSE.exe + 0xF0F380</summary>
				std::uintptr_t SetTextW()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80271, 82294)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0xECD630, 1.6.318.0: SkyrimSE.exe + 0xF0FAF0</summary>
				std::uintptr_t VisitMembers()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80279, 82302)) };

					return address;
				}
			}
		}

		namespace GMemory
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3032C50, 1.6.318.0: SkyrimSE.exe + 0x30CC600</summary>
			std::uintptr_t GlobalHeap()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(525584, 412058)) };

				return address;
			}
		}

		namespace GrabActorEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1638A10, 1.6.318.0: SkyrimSE.exe + 0x172E760</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257692, 205880)) };

				return address;
			}
		}

		namespace GString
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xED3A50, 1.6.318.0: SkyrimSE.exe + 0xF1ACC0</summary>
			std::uintptr_t Constructor()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(80446, 82562)) };

				return address;
			}
		}

		namespace GuideEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1638F48, 1.6.318.0: SkyrimSE.exe + 0x172ECB8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257712, 205887)) };

				return address;
			}
		}

		namespace HandleEntryPointVisitor
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1595B98, 1.6.318.0: SkyrimSE.exe + 0x168D578</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(240863, 195172)) };

				return address;
			}
		}

		namespace hkReferencedObject
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x9C6730, 1.6.318.0: SkyrimSE.exe + 0x9EAF20</summary>
			std::uintptr_t AddReference()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(56606, 57010)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x9C67F0, 1.6.318.0: SkyrimSE.exe + 0x9EAFE0</summary>
			std::uintptr_t RemoveReference()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(56607, 57011)) };

				return address;
			}
		}

		namespace IFormFactory
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x191B70, 1.6.318.0: SkyrimSE.exe + 0x19C630</summary>
			std::uintptr_t GetFormFactory()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14432, 14587)) };

				return address;
			}
		}

		namespace INIPrefSettingCollection
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x165830, 1.6.318.0: SkyrimSE.exe + 0x16F7D0</summary>
			std::uintptr_t InitializeCollection()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13551, 13668)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F6BA48, 1.6.318.0: SkyrimSE.exe + 0x30065D0</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(523673, 410219)) };

				return address;
			}
		}

		namespace INISettingCollection
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3104D0, 1.6.318.0: SkyrimSE.exe + 0x3252B0</summary>
			std::uintptr_t GetSetting()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(22315, 22787)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x14EB90, 1.6.318.0: SkyrimSE.exe + 0x157CB0</summary>
			std::uintptr_t InitializeCollection()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13098, 13254)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x301D758, 1.6.318.0: SkyrimSE.exe + 0x30B82D8</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(524557, 411155)) };

				return address;
			}
		}

		namespace InitTESThread
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x164D900, 1.6.318.0: SkyrimSE.exe + 0x1744760</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(259694, 207137)) };

				return address;
			}
		}

		namespace InterfaceStrings
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EC0A78, 1.6.318.0: SkyrimSE.exe + 0x1F5B278</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514286, 400446)) };

				return address;
			}
		}

		namespace Inventory3DManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F27180, 1.6.318.0: SkyrimSE.exe + 0x2FC1C50</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(517051, 403559)) };

				return address;
			}
		}

		namespace InventoryChanges
		{
			namespace FindBestSoulGemVisitor
			{
				/// <summary>1.5.97.0: SkyrimSE.exe + 0x1658668, 1.6.318.0: SkyrimSE.exe + 0x174E2D0</summary>
				std::uintptr_t VirtualFunctionTable()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(260831, 207680)) };

					return address;
				}
			}
		}

		namespace InventoryEntryData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1D73C0, 1.6.318.0: SkyrimSE.exe + 0x1E2C10</summary>
			std::uintptr_t GetName()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(15780, 16018)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1D66E0, 1.6.318.0: SkyrimSE.exe + 0x1E1F60</summary>
			std::uintptr_t GetValue()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(15757, 15995)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1D7590, 1.6.318.0: SkyrimSE.exe + 0x1E2EA0</summary>
			std::uintptr_t IsOwnedBy()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(15782, 16020)) };

				return address;
			}
		}

		namespace InvisibilityEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1639040, 1.6.318.0: SkyrimSE.exe + 0x172EF78</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257714, 205890)) };

				return address;
			}
		}

		namespace ItemCard
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x890E70, 1.6.318.0: SkyrimSE.exe + 0x8C0D10</summary>
			std::uintptr_t PopulateInformation()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(51019, 51897)) };

				return address;
			}
		}

		namespace ItemList
		{
			namespace Item
			{
				/// <summary>1.5.97.0: SkyrimSE.exe + 0x861B10, 1.6.318.0: SkyrimSE.exe + 0x88F380</summary>
				std::uintptr_t GetFilterFlag()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(50253, 51178)) };

					return address;
				}

				/// <summary>1.5.97.0: SkyrimSE.exe + 0x88B630, 1.6.318.0: SkyrimSE.exe + 0x8BA990</summary>
				std::uintptr_t IsInContainer()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(50943, 51820)) };

					return address;
				}
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x856400, 1.6.318.0: SkyrimSE.exe + 0x883290</summary>
			std::uintptr_t GetSelectedItem()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(50086, 51017)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x8568D0, 1.6.318.0: SkyrimSE.exe + 0x883700</summary>
			std::uintptr_t InvalidateListData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(50097, 51028)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x856A50, 1.6.318.0: SkyrimSE.exe + 0x883930</summary>
			std::uintptr_t Update()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(50099, 51031)) };

				return address;
			}
		}

		namespace LightEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16392D0, 1.6.318.0: SkyrimSE.exe + 0x172F1E0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257725, 205894)) };

				return address;
			}
		}

		namespace LockEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16393E0, 1.6.318.0: SkyrimSE.exe + 0x172F2F0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257728, 205898)) };

				return address;
			}
		}

		namespace MagicItem
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x101A30, 1.6.318.0: SkyrimSE.exe + 0x10BCB0</summary>
			std::uintptr_t GetCost()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(11213, 11321)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x101CC0, 1.6.318.0: SkyrimSE.exe + 0x10BF30</summary>
			std::uintptr_t GetCostliestEffectItem()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(11216, 11335)) };

				return address;
			}
		}

		namespace Main
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1DEEBE0, 1.6.318.0: SkyrimSE.exe + 0x1E82F60</summary>
			std::uintptr_t FrameCount()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(508776, 380737)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F26BF8, 1.6.318.0: SkyrimSE.exe + 0x2FC1650</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(516943, 403449)) };

				return address;
			}
		}

		namespace MemoryManager
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC02260, 1.6.318.0: SkyrimSE.exe + 0xC26F00</summary>
			std::uintptr_t Allocate()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66859, 68115)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC02560, 1.6.318.0: SkyrimSE.exe + 0xC27350</summary>
			std::uintptr_t Deallocate()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66861, 68117)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xFCFE0, 1.6.318.0: SkyrimSE.exe + 0x106EC0</summary>
			std::uintptr_t GetSingleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(11045, 11141)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC01800, 1.6.318.0: SkyrimSE.exe + 0xC264A0</summary>
			std::uintptr_t GetThreadScrapHeap()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66841, 68088)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC024B0, 1.6.318.0: SkyrimSE.exe + 0xC27150</summary>
			std::uintptr_t Reallocate()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66860, 68116)) };

				return address;
			}
		}

		namespace ModelReferenceEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x558F20, 1.6.318.0: SkyrimSE.exe + 0x574B80</summary>
			std::uintptr_t SwitchFirstThirdPerson()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(33872, 34668)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163A640, 1.6.318.0: SkyrimSE.exe + 0x1730678</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257844, 205960)) };

				return address;
			}
		}

		namespace NiAVObject
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xD41970, 1.6.318.0: SkyrimSE.exe + 0xD79A80</summary>
			std::uintptr_t GetBoneFromName()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(74481, 76207)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3A6140, 1.6.318.0: SkyrimSE.exe + 0x3BCAB0</summary>
			std::uintptr_t GetCollisionObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(25482, 26022)) };

				return address;
			}
		}

		namespace NiBooleanExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC84190, 1.6.318.0: SkyrimSE.exe + 0xCAD3B0</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69934, 71358)) };

				return address;
			}
		}

		namespace NiExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC6E860, 1.6.318.0: SkyrimSE.exe + 0xC96F30</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69477, 70859)) };

				return address;
			}
		}

		namespace NiFloatExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC84F30, 1.6.318.0: SkyrimSE.exe + 0xCAE3E0</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69971, 71398)) };

				return address;
			}
		}

		namespace NiFloatsExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC853A0, 1.6.318.0: SkyrimSE.exe + 0xCAE950</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69981, 71409)) };

				return address;
			}
		}

		namespace NightEyeEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163A978, 1.6.318.0: SkyrimSE.exe + 0x1730980</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257853, 205968)) };

				return address;
			}
		}

		namespace NiIntegerExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC85E80, 1.6.318.0: SkyrimSE.exe + 0xCAF630</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(70009, 71439)) };

				return address;
			}
		}

		namespace NiIntegersExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC86310, 1.6.318.0: SkyrimSE.exe + 0xCAFBA0</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(70019, 71450)) };

				return address;
			}
		}

		namespace NiMatrix33
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC544E0, 1.6.318.0: SkyrimSE.exe + 0xC7B890</summary>
			std::uintptr_t EulerAnglesToRotationMatrixXYZ()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(68874, 70221)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC55AE0, 1.6.318.0: SkyrimSE.exe + 0xC7CF10</summary>
			std::uintptr_t EulerAnglesToRotationMatrixZXY()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(68886, 70233)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC53EB0, 1.6.318.0: SkyrimSE.exe + 0xC7B240</summary>
			std::uintptr_t RotationMatrixToEulerAnglesXYZ()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(68868, 70215)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC559E0, 1.6.318.0: SkyrimSE.exe + 0xC7CE10</summary>
			std::uintptr_t RotationMatrixToEulerAnglesZXY()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(68885, 70232)) };

				return address;
			}
		}

		namespace NiNode
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1AFB10, 1.6.318.0: SkyrimSE.exe + 0x1BB530</summary>
			std::uintptr_t AddDecal()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(15060, 15234)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC57980, 1.6.318.0: SkyrimSE.exe + 0xC7EE30</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(68935, 70286)) };

				return address;
			}
		}

		namespace NiObjectNET
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC60990, 1.6.318.0: SkyrimSE.exe + 0xC88310</summary>
			std::uintptr_t AddExtraData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69148, 70509)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC60900, 1.6.318.0: SkyrimSE.exe + 0xC88260</summary>
			std::uintptr_t AddNamedExtraData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69147, 70508)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC612B0, 1.6.318.0: SkyrimSE.exe + 0xC88CA0</summary>
			std::uintptr_t DeleteExtraDataAt()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69159, 70520)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC60AD0, 1.6.318.0: SkyrimSE.exe + 0xC88460</summary>
			std::uintptr_t GetExtraData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69149, 70510)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC61110, 1.6.318.0: SkyrimSE.exe + 0xC88B00</summary>
			std::uintptr_t InsertExtraData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69158, 70519)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC60D10, 1.6.318.0: SkyrimSE.exe + 0xC886C0</summary>
			std::uintptr_t RemoveAllExtraData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69152, 70513)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC60BB0, 1.6.318.0: SkyrimSE.exe + 0xC88550</summary>
			std::uintptr_t RemoveExtraData()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69150, 70511)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC60CA0, 1.6.318.0: SkyrimSE.exe + 0xC88650</summary>
			std::uintptr_t RemoveExtraDataAt()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69151, 70512)) };

				return address;
			}
		}

		namespace NiRefObject
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x3012520, 1.6.318.0: SkyrimSE.exe + 0x30AD0A0</summary>
			std::uintptr_t ReferenceObjectCount()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(523912, 410493)) };

				return address;
			}
		}

		namespace NiStringExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC6C190, 1.6.318.0: SkyrimSE.exe + 0xC94780</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69420, 70795)) };

				return address;
			}
		}

		namespace NiStringsExtraData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC64280, 1.6.318.0: SkyrimSE.exe + 0xC8BF90</summary>
			std::uintptr_t CreateObject()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(69243, 70607)) };

				return address;
			}
		}

		namespace OpenEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163AE88, 1.6.318.0: SkyrimSE.exe + 0x1730EB8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257868, 206009)) };

				return address;
			}
		}

		namespace ParalysisEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163AF80, 1.6.318.0: SkyrimSE.exe + 0x1730FB0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257870, 206011)) };

				return address;
			}
		}

		namespace PeakValueModifierEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163B108, 1.6.318.0: SkyrimSE.exe + 0x1731138</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257874, 206014)) };

				return address;
			}
		}

		namespace Pickpocket
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x6C7E50, 1.6.318.0: SkyrimSE.exe + 0x6F00A0</summary>
			std::uintptr_t GetEventSource()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(40057, 41068)) };

				return address;
			}
		}

		namespace PlayerCharacter
		{
			namespace MagicTarget
			{
				/// <summary>1.5.97.0: SkyrimSE.exe + 0x1664030, 1.6.318.0: SkyrimSE.exe + 0x175A500</summary>
				std::uintptr_t VirtualFunctionTable()
				{
					static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(261920, 208048)) };

					return address;
				}
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F26EF8, 1.6.318.0: SkyrimSE.exe + 0x2FC19C8</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(517014, 403521)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16635E0, 1.6.318.0: SkyrimSE.exe + 0x1759AB0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(261916, 208040)) };

				return address;
			}
		}

		namespace PoisonedWeapon
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x6C7F40, 1.6.318.0: SkyrimSE.exe + 0x6F0190</summary>
			std::uintptr_t GetEventSource()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(40058, 41069)) };

				return address;
			}
		}

		namespace Precipitation
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F013C8, 1.6.318.0: SkyrimSE.exe + 0x2F9BAE8</summary>
			std::uintptr_t RainDirection()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(515509, 401648)) };

				return address;
			}
		}

		namespace RallyEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163D588, 1.6.318.0: SkyrimSE.exe + 0x17335F8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258027, 206127)) };

				return address;
			}
		}

		namespace ReanimateEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163B2B8, 1.6.318.0: SkyrimSE.exe + 0x1731248</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257879, 206016)) };

				return address;
			}
		}

		namespace ScrapHeap
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC034A0, 1.6.318.0: SkyrimSE.exe + 0xC28310</summary>
			std::uintptr_t Allocate()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66884, 68144)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0xC03AC0, 1.6.318.0: SkyrimSE.exe + 0xC28910</summary>
			std::uintptr_t Deallocate()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(66885, 68146)) };

				return address;
			}
		}

		namespace Script
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2E3C30, 1.6.318.0: SkyrimSE.exe + 0x2F7FC0</summary>
			std::uintptr_t ClearCachedValues()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(21329, 21788)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2E75F0, 1.6.318.0: SkyrimSE.exe + 0x2FBA00</summary>
			std::uintptr_t CompileAndRun()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(21416, 441582)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2E8400, 1.6.318.0: SkyrimSE.exe + 0x2FC890</summary>
			std::uintptr_t ParseParameters()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(21425, 21910)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2E6ED0, 1.6.318.0: SkyrimSE.exe + 0x2FB2E0</summary>
			std::uintptr_t SetCommand()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(21409, 21883)) };

				return address;
			}
		}

		namespace ScriptCompiler
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2EDC60, 1.6.318.0: SkyrimSE.exe + 0x301E10</summary>
			std::uintptr_t GetFunctionDefinition()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(21484, 21963)) };

				return address;
			}
		}

		namespace ScriptedRefEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163BD18, 1.6.318.0: SkyrimSE.exe + 0x1731B50</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257920, 206027)) };

				return address;
			}
		}

		namespace ScriptEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163BC48, 1.6.318.0: SkyrimSE.exe + 0x1731E00</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257919, 206031)) };

				return address;
			}
		}

		namespace ScriptEventSourceHolder
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x186790, 1.6.318.0: SkyrimSE.exe + 0x1941C0</summary>
			std::uintptr_t GetSingleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14108, 14298)) };

				return address;
			}
		}

		namespace ScrollItem
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1524FF0, 1.6.318.0: SkyrimSE.exe + 0x161F150</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(228867, 186591)) };

				return address;
			}
		}

		namespace Sky
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x177790, 1.6.318.0: SkyrimSE.exe + 0x1818D0</summary>
			std::uintptr_t GetSingleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13789, 13878)) };

				return address;
			}
		}

		namespace SlowTimeEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163C870, 1.6.318.0: SkyrimSE.exe + 0x17328E0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257978, 206066)) };

				return address;
			}
		}

		namespace SoulTrapEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163CA18, 1.6.318.0: SkyrimSE.exe + 0x1732A88</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257985, 206070)) };

				return address;
			}
		}

		namespace SpawnHazardEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x164E778, 1.6.318.0: SkyrimSE.exe + 0x17453A8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(259802, 207209)) };

				return address;
			}
		}

		namespace SpellItem
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1525720, 1.6.318.0: SkyrimSE.exe + 0x161F8A8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(228888, 186619)) };

				return address;
			}
		}

		namespace StaggerEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163CB38, 1.6.318.0: SkyrimSE.exe + 0x1732BA8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257988, 206072)) };

				return address;
			}
		}

		namespace StandardItemData
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16ABAF0, 1.6.318.0: SkyrimSE.exe + 0x179ED90</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(267990, 214924)) };

				return address;
			}
		}

		namespace SummonCreatureEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163CFF8, 1.6.318.0: SkyrimSE.exe + 0x17330D0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258015, 206083)) };

				return address;
			}
		}

		namespace TargetValueModifierEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163D470, 1.6.318.0: SkyrimSE.exe + 0x17334E0</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(546854, 206092)) };

				return address;
			}
		}

		namespace TaskQueueInterface
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x5C1E40, 1.6.318.0: SkyrimSE.exe + 0x5E8AC0</summary>
			std::uintptr_t QueueScriptFunctionCall()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(35918, 36893)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x63F810, 1.6.318.0: SkyrimSE.exe + 0x665DD0</summary>
			std::uintptr_t ShouldQueueTask()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(38079, 39033)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F38978, 1.6.318.0: SkyrimSE.exe + 0x2FD3650</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(517228, 403759)) };

				return address;
			}
		}

		namespace TelekinesisEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163DCB8, 1.6.318.0: SkyrimSE.exe + 0x1733C88</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258037, 206139)) };

				return address;
			}
		}

		namespace TES
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x155090, 1.6.318.0: SkyrimSE.exe + 0x15E310</summary>
			std::uintptr_t GetCell()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13177, 13322)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x156970, 1.6.318.0: SkyrimSE.exe + 0x15FCB0</summary>
			std::uintptr_t GetLandColor()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13200, 13346)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x156CD0, 1.6.318.0: SkyrimSE.exe + 0x160030</summary>
			std::uintptr_t GetMaterialID()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13203, 13349)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F26B20, 1.6.318.0: SkyrimSE.exe + 0x2FC1658</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(516923, 403450)) };

				return address;
			}
		}

		namespace TESCondition
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x444710, 1.6.318.0: SkyrimSE.exe + 0x45D8B0</summary>
			std::uintptr_t Clear()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(29072, 29886)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x4447A0, 1.6.318.0: SkyrimSE.exe + 0x45D940</summary>
			std::uintptr_t IsTrue()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(29074, 29888)) };

				return address;
			}
		}

		namespace TESDataHandler
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16AE70, 1.6.318.0: SkyrimSE.exe + 0x174B20</summary>
			std::uintptr_t EnumerateReferencesCloseToPoint()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13604, 13700)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x16AF00, 1.6.318.0: SkyrimSE.exe + 0x174BB0</summary>
			std::uintptr_t EnumerateReferencesCloseToReference()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13605, 13701)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x194230, 1.6.318.0: SkyrimSE.exe + 0x19F110</summary>
			std::uintptr_t GetForm()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14461, 14617)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EBE428, 1.6.318.0: SkyrimSE.exe + 0x1F58C28</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514141, 400269)) };

				return address;
			}
		}

		namespace TESForm
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x190D50, 1.6.318.0: SkyrimSE.exe + 0x19B880</summary>
			std::uintptr_t GetEnchantmentItem()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14411, 14563)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1944E0, 1.6.318.0: SkyrimSE.exe + 0x19F2E0</summary>
			std::uintptr_t GetFormFromEditorID()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14464, 14620)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x196E10, 1.6.318.0: SkyrimSE.exe + 0x1A1C90</summary>
			std::uintptr_t GetFormName()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14548, 14720)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1A1730, 1.6.318.0: SkyrimSE.exe + 0x1ACFE0</summary>
			std::uintptr_t GetFormWeight()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14809, 14988)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x190DC0, 1.6.318.0: SkyrimSE.exe + 0x19B8F0</summary>
			std::uintptr_t GetMaximumCharge()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14412, 14564)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x194D20, 1.6.318.0: SkyrimSE.exe + 0x19FA90</summary>
			std::uintptr_t SetTemporary()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(14485, 14642)) };

				return address;
			}
		}

		namespace TESFurniture
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1553E58, 1.6.318.0: SkyrimSE.exe + 0x164B400</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(233784, 189309)) };

				return address;
			}
		}

		namespace TESObjectCELL
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x44B9A0, 1.6.318.0: SkyrimSE.exe + 0x465370</summary>
			std::uintptr_t CreateTemporaryEffectParticle()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(29218, 30071)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2654C0, 1.6.318.0: SkyrimSE.exe + 0x2772D0</summary>
			std::uintptr_t GetHavokWorld()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(18536, 18995)) };

				return address;
			}
		}

		namespace TESObjectREFR
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x296C00, 1.6.318.0: SkyrimSE.exe + 0x2A9180</summary>
			std::uintptr_t Activate()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(19369, 19796)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1D8E40, 1.6.318.0: SkyrimSE.exe + 0x1E4880</summary>
			std::uintptr_t GetInventoryChanges()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(15802, 16040)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2945E0, 1.6.318.0: SkyrimSE.exe + 0x2A6CB0</summary>
			std::uintptr_t GetReferenceFrom3D()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(19323, 19750)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2A74C0, 1.6.318.0: SkyrimSE.exe + 0x2B9260</summary>
			std::uintptr_t GetReferenceLock()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(19818, 20223)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2961F0, 1.6.318.0: SkyrimSE.exe + 0x2A88A0</summary>
			std::uintptr_t GetReferenceName()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(19354, 19781)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1D9080, 1.6.318.0: SkyrimSE.exe + 0x1E4B80</summary>
			std::uintptr_t GetStealValue()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(15807, 16045)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x29A330, 1.6.318.0: SkyrimSE.exe + 0x2AC9E0</summary>
			std::uintptr_t IsCrimeToActivate()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(19400, 19827)) };

				return address;
			}
		}

		namespace TESObjectWEAP
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2EFF868, 1.6.318.0: SkyrimSE.exe + 0x2F99F50</summary>
			std::uintptr_t UnarmedWeapon()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514923, 401061)) };

				return address;
			}
		}

		namespace TESSoulGem
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x237A90, 1.6.318.0: SkyrimSE.exe + 0x247E20</summary>
			std::uintptr_t GetSoulLevelValue()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(17753, 18166)) };

				return address;
			}
		}

		namespace TurnUndeadEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163D7B8, 1.6.318.0: SkyrimSE.exe + 0x1733828</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258029, 206131)) };

				return address;
			}
		}

		namespace UI
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0xEBE150, 1.6.318.0: SkyrimSE.exe + 0xF044A0</summary>
			std::uintptr_t IsMenuOpen()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(79937, 82074)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x8DA860, 1.6.318.0: SkyrimSE.exe + 0x909EE0</summary>
			std::uintptr_t PlaySound()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(52054, 52939)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x8AB180, 1.6.318.0: SkyrimSE.exe + 0x8DA780</summary>
			std::uintptr_t ShowMessageBox()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(51420, 52269)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x8DA3D0, 1.6.318.0: SkyrimSE.exe + 0x909870</summary>
			std::uintptr_t ShowNotification()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(52050, 52933)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EBEB20, 1.6.318.0: SkyrimSE.exe + 0x1F59320</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514178, 400327)) };

				return address;
			}
		}

		namespace UIMessageQueue
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x8D5710, 1.6.318.0: SkyrimSE.exe + 0x905CD0</summary>
			std::uintptr_t AddInventoryUpdateMessage()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(51911, 52849)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1652D0, 1.6.318.0: SkyrimSE.exe + 0x16ECD0</summary>
			std::uintptr_t AddMessage()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(13530, 13631)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EC0A70, 1.6.318.0: SkyrimSE.exe + 0x1F5B270</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514285, 400445)) };

				return address;
			}
		}

		namespace UserEvents
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2F25250, 1.6.318.0: SkyrimSE.exe + 0x2FBF640</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(516458, 402638)) };

				return address;
			}
		}

		namespace ValueAndConditionsEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163DDB0, 1.6.318.0: SkyrimSE.exe + 0x1733E60</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258039, 206141)) };

				return address;
			}
		}

		namespace ValueModifierEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163DF38, 1.6.318.0: SkyrimSE.exe + 0x1733FE8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258043, 206143)) };

				return address;
			}
		}

		namespace VampireLordEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x1638BA0, 1.6.318.0: SkyrimSE.exe + 0x172E9F8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(257697, 205883)) };

				return address;
			}
		}

		namespace VATS
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x2EC5C60, 1.6.318.0: SkyrimSE.exe + 0x2F603B0</summary>
			std::uintptr_t Singleton()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(514725, 400883)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x759420, 1.6.318.0: SkyrimSE.exe + 0x7873C0</summary>
			std::uintptr_t GetPlayerUpdateMultiplier()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(43104, 44301)) };

				return address;
			}

			/// <summary>1.5.97.0: SkyrimSE.exe + 0x759360, 1.6.318.0: SkyrimSE.exe + 0x787300</summary>
			std::uintptr_t SetMagicTimeSlowdown()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(43103, 44300)) };

				return address;
			}
		}

		namespace WerewolfEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163E0F0, 1.6.318.0: SkyrimSE.exe + 0x17340F8</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258048, 206145)) };

				return address;
			}
		}

		namespace WerewolfFeedEffect
		{
			/// <summary>1.5.97.0: SkyrimSE.exe + 0x163E1C0, 1.6.318.0: SkyrimSE.exe + 0x1734200</summary>
			std::uintptr_t VirtualFunctionTable()
			{
				static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(258049, 206147)) };

				return address;
			}
		}

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x3497408, 1.6.318.0: SkyrimSE.exe + 0x3531398</summary>
		std::uintptr_t ThreadLocalStorageIndex()
		{
			static auto address{ Relocation::AddressLibrary::GetSingleton().GetAddress(SKYRIM_RELOCATE(528600, 415542)) };

			return address;
		}
	}
}
