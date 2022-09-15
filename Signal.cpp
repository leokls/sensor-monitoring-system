#include "Signal.h"

Project2::Signal::Signal(double voltageOffset, Project2::Time timeOffset)
  : voltageOffset(voltageOffset), timeOffset(timeOffset) {}

Project2::Signal::~Signal()
{
  
}

double Project2::Signal::getVoltageOffset() const
{
  return voltageOffset;
}

Project2::Time Project2::Signal::getTimeOffset() const
{
  return timeOffset;
}
