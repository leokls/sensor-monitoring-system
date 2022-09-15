#include "DataRecorder.h"

#include <iomanip>
#include <iostream>
using namespace std;

Project2::DataRecorder::DataRecorder(ostream& out) : out(out)
{
}

void Project2::DataRecorder::log(
  Project2::Time timestamp, string sensorName, 
  double sensorVoltage, string sensorUnits)
{
  out << timestamp << " - " << sensorName << " - " 
      << fixed << setprecision(2) << sensorVoltage << " " 
      << sensorUnits << "\n"; 
}
