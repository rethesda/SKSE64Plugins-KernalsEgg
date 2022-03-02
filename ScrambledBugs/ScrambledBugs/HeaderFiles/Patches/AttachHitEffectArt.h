#pragma once

#include "PCH.h"

#include "Shared/Skyrim/M/ModelReferenceEffect.h"



namespace ScrambledBugs::Patches
{
	class AttachHitEffectArt
	{
	public:
		static void Patch(bool& attachHitEffectArt);

	private:
		static void Attach(Skyrim::ModelReferenceEffect* modelReferenceEffect);

		static decltype(&AttachHitEffectArt::Attach) attach_;
	};
}
