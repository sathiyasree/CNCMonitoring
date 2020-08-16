#ifndef __STARTUPSELFTESTHANDLER_H__

#include "IcncMonitor.hpp"

enum SelfTestStatusCode
{
	C_NoData = 0x00,
	C_ControllerBoard_NOK = 0x01,
	C_ConfigDataCorrupted = 0x02,
	C_AllOk = 0xFF
};

class StartupSelfTestHandler
{
public: 
	StartupSelfTestHandler(unsigned int selfTestStatuscode);
	void updateStartupSelfTestStatus(unsigned int selfTestStatuscode);

	void validateCncData();
private:
	unsigned int m_selfTestStatuscode;
};
#endif // !__STARTUPSELFTESTHANDLER_H__
