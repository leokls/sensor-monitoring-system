#ifndef PROJECT2_TEMPERATURESENSOR_H
#define PROJECT2_TEMPERATURESENSOR_H

#include "Sensor.h"
#include "Signal.h"

#include <string>
using namespace std;

namespace Project2
{
  class TemperatureSensor : public Sensor
  {
    public:
      TemperatureSensor(string name, Project2::Signal &source);
      ~TemperatureSensor();
      virtual string getUnits() const;
  };
}

#endif
