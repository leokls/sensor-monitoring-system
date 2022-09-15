#ifndef PROJECT2_ANGULARSENSOR_H
#define PROJECT2_ANGULARSENSOR_H

#include <string>
using namespace std;

#include "DataRecorder.h"
#include "Sensor.h"
#include "Signal.h"
#include "Time.h"

namespace Project2
{
  class AngularSensor : public Sensor
  {
    public:
      AngularSensor(string name, Project2::Signal &source);
      virtual ~AngularSensor();
      virtual string getUnits() const;
  };
}

#endif
