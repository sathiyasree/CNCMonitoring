#ifndef __IALERTFUNCTION_H__

#include <string>
#include <iostream>

class IAlert
{
public:
	IAlert(std::string alertReason)
	{
		m_alertReason = alertReason;
	}
	IAlert() = default;
	~IAlert() = default;

	void alertUser(std::string alertReason)
	{
		/* give data to the alert output type in required format*/
		std::cout << m_alertReason;
	}
private:
	bool m_alertRequired;
	std::string m_alertReason;
};
#endif // !__ALERTFUNCTION_H__
