#include "AlertFunction.hpp"

IAlert* IAlert::m_pThis = nullptr;

void IAlert::alertUser(AlertReasonType alertReason, std::string alertString)
{
	/* give data to the alert output type in required format*/
	m_alertReason.push_back(DiagData(alertReason, alertString));
}

void IAlert::clearPreviousAlerts()
{
	m_alertReason.clear();
}
	
bool IAlert::doesSystemNeedAttention()
{
	return(m_alertReason.size() != 0);
} 

std::string IAlert::getdiagnosisData()
{
	std::string returnval = "";
	
	return(returnval);

}
