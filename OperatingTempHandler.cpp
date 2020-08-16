#include "OperatingTempHandler.h"

OperatingTempHandler::OperatingTempHandler(float currentTemp, float maxlimit)
{
	m_currentTemp = currentTemp;
	m_maxLimit = maxlimit;
}

void OperatingTempHandler::updateOperatingTemp(float currentTemp)
{
	m_currentTemp = currentTemp;
	validateCncData();
}

void OperatingTempHandler::validateCncData()
{
	if (m_currentTemp > m_maxLimit)
	{
		//IAlert("Current Operating Temperature: " + std::to_string(m_currentTemp) + " exceeding max limit of " + std::to_string(m_maxLimit));
	}
}
void OperatingTempHandler::changeOperatingTempLimit(float maxLimit)
{
	m_maxLimit = maxLimit;
}
