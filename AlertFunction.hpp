#ifndef __IALERTFUNCTION_H__

#include <string>
#include <iostream>
#include <vector>

enum AlertReasonType
{
	C_CheckEnvironment = 0,
	C_CheckMachine = 1
};
class IAlert
{
public:
	IAlert() = default;
	~IAlert() = default;

	void alertUser(AlertReasonType alertReason, std::string alertString);
	void clearPreviousAlerts();
	
	bool doesSystemNeedAttention();
	std::string getdiagnosisData();
	static IAlert* getAlertFunction() {
		if (m_pThis == nullptr) {
			m_pThis = new IAlert();
		}
		return m_pThis;
	}

private:
	std::vector<DiagData>m_alertReason;
	
	// Assignment operator
	IAlert& operator=(const IAlert&) { return *this; }

	// Singleton alert class
	static IAlert* m_pThis;;
};
#endif //__IALERTFUNCTION_H__
