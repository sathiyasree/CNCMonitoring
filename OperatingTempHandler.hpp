#ifndef __OPERATINGTEMPHANDLER_H__

#include "IcncMonitor.hpp"

class OperatingTempHandler
{
public:

	OperatingTempHandler() = default;
	~OperatingTempHandler() = default;

	OperatingTempHandler(float currentTemp, float maxlimit);
	void updateOperatingTemp(float currentTemp);
	void changeOperatingTempLimit(float maxLimit);

	void validateCncData();
private:
	float m_currentTemp;
	float m_maxLimit;
};

#endif // !__OPERATINGTEMPHANDLER_H__
