#ifndef __OPERATINGTEMPHANDLER_H__

class OperatingTempHandler
{
public:

	OperatingTempHandler() = default;
	~OperatingTempHandler() = default;

	OperatingTempHandler(float currentTemp, float maxLimit):m_currentTemp(currentTemp),m_maxLimit(maxLimit){}
	void updateOperatingTemp(float currentTemp);
	void changeOperatingTempLimit(float maxLimit);

	void validateCncData();
private:
	float m_currentTemp;
	float m_maxLimit;
};

#endif // !__OPERATINGTEMPHANDLER_H__
