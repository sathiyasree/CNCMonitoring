#ifndef __STARTUPSELFTESTHANDLER_H__

enum SelfTestStatusCodeType
{
	C_NoData = 0x00,
	C_ControllerBoard_NOK = 0x01,
	C_ConfigDataCorrupted = 0x02,
	C_AllOk = 0xFF
};

class StartupSelfTestHandler
{
public: 
	StartupSelfTestHandler() = default;
	~StartupSelfTestHandler() = default;
	explicit StartupSelfTestHandler(SelfTestStatusCodeType selfTestStatuscode):m_selfTestStatuscode(selfTestStatuscode) {}
	void updateStartupSelfTestStatus(SelfTestStatusCodeType selfTestStatuscode);

	void validateCncData();
private:
	SelfTestStatusCodeType m_selfTestStatuscode;
};
#endif // !__STARTUPSELFTESTHANDLER_H__
