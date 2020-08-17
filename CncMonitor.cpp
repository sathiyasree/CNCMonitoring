// CncMonitor.cpp : Defines the entry point for the console application.
//

#include "CncMonitor.hpp"
#include "StartupSelfTestHandler.hpp"
#include "OperatingTempHandler.hpp"
#include "OperationDurationHandler.hpp"
#include "PartDimVariationHandler.hpp"

int main()
{
    // Below object creation or function calls will be triggerend by timing events 
	// Below object creation or function calls will be triggerend by timing events 

	//Triggered during startup
	StartupSelfTestHandler StartupSelfTest(C_AllOk);

	// Timer event when 30 minute duration is expired
	OperatingTempHandler OperatingTemp(23, 35.0f);

	// Timer event when 15 minute duration is expired
	OperationDurationHandler OperationDuration(30, 360);

	//Assumption: every time a part is produced
	PartDimVariationHandler PartDimVariation(0.0f, 0.05f);

	PartDimVariation.updatePartDimVariation(0.06f);


	return 0;
    
    return 0;
}
