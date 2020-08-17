#include "OperatingTempHandler.hpp"
#include "IcncMonitor.hpp"

void OperatingTempHandler::updateOperatingTemp(float currentTemp)
{
	m_currentTemp = currentTemp;
	validateCncData();
}

void OperatingTempHandler::validateCncData()
{
	if (m_currentTemp > m_maxLimit)
	{
		std::string alertText= "Current Operating Temperature : " + std::to_string(m_currentTemp) + " exceeding max limit of " + std::to_string(m_maxLimit);
		IAlert::getAlertFunction()->alertUser(C_CheckEnvironment, alertText);
	}
}
void OperatingTempHandler::changeOperatingTempLimit(float maxLimit)
{
	m_maxLimit = maxLimit;
}
