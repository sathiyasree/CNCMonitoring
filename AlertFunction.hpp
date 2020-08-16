#ifndef __IALERTFUNCTION_H__

#include <string>
#include <iostream>
#include <vector>

enum AlertReasonType
{
	C_CheckEnvironment = 0,
	C_CheckMachine = 1
};

struct DiagData
{
	AlertReasonType alertReason;
	std::string alertString;
};
class IAlert
{
public:
	IAlert() = default;
	~IAlert() = default;

	void alertUser(DiagData alertReason);
	void clearPreviousAlerts();
	
	bool doesSystemNeedAttention();
	std::string getdiagnosisData();
private:
	std::vector<DiagData>m_alertReason;
};
#endif //__IALERTFUNCTION_H__
