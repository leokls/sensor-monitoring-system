#ifndef PROJECT2_PRESSURE_SENSOR_H
#define PROJECT2_PRESSURE_SENSOR_H

#include <string>
using namespace std;

#include "DataRecorder.h"
#include "Sensor.h"
#include "Signal.h"
#include "Time.h"

namespace Project2
{
  class PressureSensor : public Sensor
  {
    public:
      PressureSensor(string name, Project2::Signal &source);
      virtual ~PressureSensor();
      virtual string getUnits() const;
  };
}

#endif
