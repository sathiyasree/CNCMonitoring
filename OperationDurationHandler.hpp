#ifndef __OPERATIONDURATIONHANDLER_H__

class OperationDurationHandler
{
public:
	OperationDurationHandler() = default;
	~OperationDurationHandler() = default;

	OperationDurationHandler(unsigned int operationDuration, unsigned int maxLimit):m_operationDuration(operationDuration),m_maxLimit(maxLimit){}
	void updateOperationDuration(unsigned int operationDuration);
	void changeOperationDurationLimit(unsigned int maxLimit);

	void validateCncData();

private:
	unsigned int m_operationDuration;
	unsigned int m_maxLimit;
};
#endif // !__OPERATIONDURATIONHANDLER_H_
