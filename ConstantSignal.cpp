#include "ConstantSignal.h"

Project2::ConstantSignal::ConstantSignal(
  double voltageOffset, 
  Project2::Time timeOffset)
  : Signal(voltageOffset, timeOffset)
  {
  }

double 
Project2::ConstantSignal::getVoltageAtTime(Project2::Time t) const
{
  return getVoltageOffset();
}
