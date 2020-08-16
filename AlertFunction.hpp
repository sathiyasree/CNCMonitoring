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

	void alertUser(DiagData alertReason)
	{
		/* give data to the alert output type in required format*/
		m_alertReason.push_back(alertReason);
	}
	void clearPreviousAlerts()
	{
		m_alertReason.clear();
	}
	
	bool doesSystemNeedAttention()
	{
		return(m_alertReason.size() != 0);
	} 

	std::string getdiagnosisData();
private:
	std::vector<DiagData>m_alertReason;
};
