#include "Sensor.h"

Project2::Sensor::Sensor(string name, Project2::Signal &source)
  : name(name), source(source) {}

Project2::Sensor::~Sensor()
{

}

string Project2::Sensor::getName() const
{
  return name;
}

Project2::Signal &Project2::Sensor::getSource() const
{
  return source;
}

void Project2::Sensor::takeReading(
  Project2::Time t, 
  Project2::DataRecorder &recorder) const
{
  recorder.log(t, getName(), getSource().getVoltageAtTime(t), getUnits());
}
