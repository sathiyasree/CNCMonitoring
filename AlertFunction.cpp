#include "AlertFunction.hpp"

void IAlert::alertUser(DiagData alertReason)
{
	/* give data to the alert output type in required format*/
	m_alertReason.push_back(alertReason);
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

}
