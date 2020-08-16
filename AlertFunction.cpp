#include "AlertFunction.hpp"

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

std::string IAlert::getdiagnosisData()
{

}
