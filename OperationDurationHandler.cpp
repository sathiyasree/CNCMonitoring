#include "OperationDurationHandler.hpp"

OperationDurationHandler::OperationDurationHandler(unsigned int operationDuration, unsigned int maxLimit)
{
	m_operationDuration = operationDuration;
	m_maxLimit = maxLimit;
}
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
		// call Alert function
	}
}
