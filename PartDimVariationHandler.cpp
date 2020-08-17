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
		// call Alert function
	}
}
void PartDimVariationHandler::changeOperationTempLimit(float maxLimit)
{
	m_maxLimit = maxLimit;
}
