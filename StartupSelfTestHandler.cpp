#include "StartupSelfTestHandler.h"

StartupSelfTestHandler::StartupSelfTestHandler(unsigned int selfTestStatuscode)
{
	m_selfTestStatuscode = selfTestStatuscode;
}

void StartupSelfTestHandler::updateStartupSelfTestStatus(unsigned int selfTestStatuscode)
{
	m_selfTestStatuscode = selfTestStatuscode;
	validateCncData();
}

void StartupSelfTestHandler::validateCncData()
{
	std::string alertText = "";
	switch (m_selfTestStatuscode)
	{
	case C_NoData:
		alertText = "No Data available in CNC monitor";
		break;
	case C_ConfigDataCorrupted:
		alertText = "Controller board in the machine is not ok";
		break;
	case C_ControllerBoard_NOK:
		alertText = "Configuration data in the machine is corrupted";
		break;
	case C_AllOk:
	default:
		alertText = "All ok, No problem in either CNC machine and in environment";
		break;
	}
	// call alert function
}
