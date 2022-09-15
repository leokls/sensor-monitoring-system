#ifndef PROJECT2_VIBRATIONSENSOR_H
#define PROJECT2_VIBRATIONSENSOR_H

#include "Sensor.h"
#include "Signal.h"

#include <string>
using namespace std;

namespace Project2 
{
  class VibrationSensor : public Sensor
  {
    public:
      VibrationSensor(string name, Project2::Signal &source);
      virtual ~VibrationSensor();
      virtual string getUnits() const;
  };
}

#endif
