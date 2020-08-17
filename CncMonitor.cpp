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
    StartupSelfTestHandler StartupSelfTest(C_AllOk);
    OperatingTempHandler OperatingTemp(23, 35.0f);
    OperationDurationHandler OperationDuration(30,360);
    PartDimVariationHandler PartDimVariation (0.0f, 0.05f);
    
    return 0;
}
