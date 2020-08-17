#include "OperationDurationHandler.hpp"
#include "IcncMonitor.hpp"
void OperationDurationHandler::updateOperationDuration(unsigned int operationDuration)
{
	m_operationDuration = operationDuration;
	validateCncData();
}
void OperationDurationHandler::changeOperationDurationLimit(unsigned int maxLimit)
{
	m_maxLimit = maxLimit;
}

void OperationDurationHandler::validateCncData()
{
	if (m_operationDuration > m_maxLimit)
	{
		std::string alertText = "Continuous Operatin duration : " + std::to_string(m_operationDuration) + " exceeding max limit of " + std::to_string(m_maxLimit) + "minutes";
		IAlert::getAlertFunction()->alertUser(C_CheckEnvironment, alertText);
	}
}
