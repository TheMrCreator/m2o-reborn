/** @file CHuman2.hpp
*  @brief Game's Entity class
*
*
*  @author Tyldar (darreugne@gmail.com)
*/

#pragma once
#include "CommonHeaders.h"

#include "CEntity.hpp"
#include "CHumanInventory.hpp"
#include "CHumanScript.hpp"
#include "CHumanWeaponController.hpp"
#include "CCar.hpp"

namespace M2
{
	class ICHuman2
	{
	public:
		pad(ICHuman2, pad0, 0x64);						//0000 - 0064
		C_Car				*m_pCurrentCar;				//0064 - 0068
		pad(ICHuman2, pad1, 0x38);
		C_HumanInventory	*m_pInventory;				//00A0 - 00A4
		C_HumanScript		*m_pScript;					//00A4 - 00A8
		pad(ICHuman2, pad2, 0x8);						//00A8 - 00B0
		C_HumanWeaponController *m_pWeaponController;	//00B0 - 00B4
	};

	class C_Human2 : public ICHuman2
	{
	public:
		C_HumanInventory	*GetInventory() { return reinterpret_cast<ICHuman2 *>(this)->m_pInventory; }
		C_HumanScript	*GetScript() { return reinterpret_cast<ICHuman2 *>(this)->m_pScript; }
		C_HumanWeaponController	*GetWeaponController() { return reinterpret_cast<ICHuman2 *>(this)->m_pWeaponController; }
	};
};