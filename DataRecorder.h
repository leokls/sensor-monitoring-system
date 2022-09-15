#ifndef PROJECT2_DATARECORDER_H
#define PROJECT2_DATARECORDER_H

#include "Time.h"

#include <string>
using namespace std;

namespace Project2
{
  class DataRecorder
  {
    public:
      // Constructor
      DataRecorder(ostream& out);
      
      // Outputs the data in specified format to standard out.
      // E.g.: "5h:6m:7s - test sensor - 12.00 test units
      void log(Project2::Time timestamp, 
          string sensorName, 
          double sensorVoltage,
          string sensorUnits);
    
    private:
      ostream& out;
  };
}

#endif
