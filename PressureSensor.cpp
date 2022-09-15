#include "PressureSensor.h"

Project2::PressureSensor::PressureSensor(
  string name, 
  Project2::Signal &source
  )
  : Sensor(name, source) 
{

}

Project2::PressureSensor::~PressureSensor()
{
  
}

string Project2::PressureSensor::getUnits() const
{
  return "Pounds per square inch (PSI)";
}
