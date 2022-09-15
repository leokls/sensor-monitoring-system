#include "TemperatureSensor.h"

Project2::TemperatureSensor::TemperatureSensor(
  string name, 
  Project2::Signal &source
  )
  : Sensor(name, source)
{

}

Project2::TemperatureSensor::~TemperatureSensor()
{

}

string
Project2::TemperatureSensor::getUnits() const
{
  return "Degrees Celsius";
}