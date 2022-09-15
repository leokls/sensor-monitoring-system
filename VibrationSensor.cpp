#include "VibrationSensor.h"

Project2::VibrationSensor::VibrationSensor(
  string name, 
  Project2::Signal &source
  )
  : Sensor(name, source)
{

}

Project2::VibrationSensor::~VibrationSensor()
{

}

string 
Project2::VibrationSensor::getUnits() const
{
  return "Hertz (Hz)";
}
