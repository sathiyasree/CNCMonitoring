#ifndef __PARTDIMVARIATIONHANDLER_H__

class PartDimVariationHandler
{

public:
	PartDimVariationHandler() = default;
	~PartDimVariationHandler() = default;
	PartDimVariationHandler(float currentPartDimvariation, float maxLimit):m_currentPartDimVariation(currentPartDimvariation),m_maxLimit(maxLimit){}
	void updatePartDimVariation(float currentPartDimvariation);
	void changeOperationTempLimit(float maxLimit);

	void validateCncData();

private:
	float m_currentPartDimVariation;
	float m_maxLimit;
};
#endif // !__PARTDIMVARIATIONHANDLER_H__
