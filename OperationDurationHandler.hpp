#ifndef __OPERATIONDURATIONHANDLER_H__

#include "IcncMonitor.hpp"

class OperationDurationHandler
{
public:
	OperationDurationHandler() = default;
	~OperationDurationHandler() = default;

	OperationDurationHandler(unsigned int operationDuration, unsigned int maxLimit);
	void updateOperationDuration(unsigned int operationDuration);
	void changeOperationDurationLimit(unsigned int maxLimit);

	void validateCncData();

private:
	unsigned int m_operationDuration;
	unsigned int m_maxLimit;
};
#endif // !__OPERATIONDURATIONHANDLER_H_
