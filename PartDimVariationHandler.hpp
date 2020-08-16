#ifndef __PARTDIMVARIATIONHANDLER_H__

#include "IcncMonitor.h"

class PartDimVariationHandler
{

public:
	PartDimVariationHandler() = default;
	~PartDimVariationHandler() = default;
	PartDimVariationHandler(float currentPartDimvariation, float maxLimit);
	void updatePartDimVariation(float currentPartDimvariation);
	void changeOperationTempLimit(float maxLimit);

	void validateCncData();

private:
	float m_currentPartDimVariation;
	float m_maxLimit;
};
#endif // !__PARTDIMVARIATIONHANDLER_H__
