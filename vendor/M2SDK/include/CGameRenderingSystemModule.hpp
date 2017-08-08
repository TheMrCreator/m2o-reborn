/** @file CPlayerRadio.cpp
*  @brief Game's radio wrapper
*
*
*  @author Tyldar (darreugne@gmail.com)
*/

#pragma once
#include "CommonHeaders.h"

namespace M2
{
	class ICGameRenderingSystemModule
	{
	public:
	};

	class C_GameRenderingSystemModule : public GameClassWrapper<C_GameRenderingSystemModule, ICGameRenderingSystemModule, 0x1CC7FD0>
	{
	public:
		void ResetAllVideoSettingsToDefault()
		{
			Mem::InvokeFunction<Mem::call_this, int>(0x0B537F0, this);
		}

		void SetAmbientOcclusion(int occlusion)
		{
			Mem::InvokeFunction<Mem::call_this, int>(0x0B500A0, this, occlusion);
		}

		void SetAnisotropicFiltering(int filtering)
		{
			Mem::InvokeFunction<Mem::call_this, int>(0x0B50050, this, filtering);
		}

		void SetFullscreen(bool full)
		{
			Mem::InvokeFunction<Mem::call_this, int>(0x0B6BD50, this, full);
		}

		void SetGeometryDetail(int detail)
		{
			Mem::InvokeFunction<Mem::call_this, int>(0x0B50100, this, detail);
		}

		void SetShadowQuality(int quality)
		{
			Mem::InvokeFunction<Mem::call_this, int>(0x0B500D0, this, quality);
		}

		void SetVideoResolutionMode(int mode)
		{
			Mem::InvokeFunction<Mem::call_this, int>(0x0B6FA70, this, mode);
		}
	};
};