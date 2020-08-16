#include"PartDimVariationHandler.hpp"

PartDimVariationHandler::PartDimVariationHandler(float currentPartDimvariation, float maxLimit)
{
	m_currentPartDimVariation = currentPartDimvariation;
	m_maxLimit = maxLimit;
}

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
