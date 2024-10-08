#include "PrecompiledHeader.h"

#include "Patches/ReflectDamage.h"

#include "Addresses.h"
#include "Patterns.h"
#include "Shared/Utility/Assembly.h"
#include "Shared/Utility/Memory.h"



namespace ScrambledBugs::Patches
{
	void ReflectDamage::Load(bool& reflectDamage)
	{
		if (!Patterns::Patches::ReflectDamage::CompareReflectDamage())
		{
			reflectDamage = false;

			return;
		}

		Utility::Memory::SafeWrite(Addresses::Patches::ReflectDamage::CompareReflectDamage, Utility::Assembly::NO_OPERATION_8);
	}
}
