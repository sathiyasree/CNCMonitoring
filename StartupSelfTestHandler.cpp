#include "StartupSelfTestHandler.hpp"
#include <map>

std::map<SelfTestStatusCodeType, std::string> selfTestCodeEnumtoString =
{
	{ C_NoData,"No Data available in CNC monitor" },
	{ C_ControllerBoard_NOK,"Controller board in the machine is not ok" },
	{ C_ConfigDataCorrupted,"Configuration data in the machine is corrupted"},
	{ C_AllOk,"All ok, No problem in either CNC machine and in environment" }
};
StartupSelfTestHandler::StartupSelfTestHandler(SelfTestStatusCodeType selfTestStatuscode)
{
	m_selfTestStatuscode = selfTestStatuscode;
}

void StartupSelfTestHandler::updateStartupSelfTestStatus(SelfTestStatusCodeType selfTestStatuscode)
{
	m_selfTestStatuscode = selfTestStatuscode;
	validateCncData();
}

void StartupSelfTestHandler::validateCncData()
{
	std::string alertText = selfTestCodeEnumtoString[m_selfTestStatuscode];
	if (m_selfTestStatuscode != C_AllOk)
	{
		// call alert function
	}
}
