#pragma once

#include "PrecompiledHeader.h"



namespace BugFixesSSE::Fixes
{
	class MagicEffectConditions
	{
	public:
		static void Fix(bool& magicEffectConditions);

	private:
		static float ActiveEffectConditionUpdateInterval();
		static void  UpdateConditions(Skyrim::ActiveEffect* activeEffect, float elapsedTimeDelta, bool forceUpdate);
	};
}
