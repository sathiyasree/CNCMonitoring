#include"PartDimVariationHandler.hpp"

void PartDimVariationHandler::updatePartDimVariation(float currentPartDimvariation)
{
	m_currentPartDimVariation = currentPartDimvariation;
	validateCncData();
}

void PartDimVariationHandler::validateCncData()
{
	if (m_currentPartDimVariation > m_maxLimit)
	{
		std::string alertText= "Current Dimension Variation : " + std::to_string(m_currentPartDimVariation) + " exceeding max limit of " + std::to_string(m_maxLimit);
		IAlert::getAlertFunction()->alertUser(C_CheckMachine , alertText);
	}
}
void PartDimVariationHandler::changeOperationTempLimit(float maxLimit)
{
	m_maxLimit = maxLimit;
}
