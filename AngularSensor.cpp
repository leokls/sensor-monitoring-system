#include "AngularSensor.h"
#include "Sensor.h"
#include "Signal.h"

#include <string>
using namespace std;

Project2::AngularSensor::AngularSensor(string name, Project2::Signal &source)
  : Sensor(name, source)
{

}

Project2::AngularSensor::~AngularSensor()
{

}

string Project2::AngularSensor::getUnits() const
{
  return "Radians";
}
