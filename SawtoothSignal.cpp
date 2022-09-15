#include "SawtoothSignal.h"

#include <cmath>

Project2::SawtoothSignal::SawtoothSignal(
  double voltageOffset, 
  Project2::Time timeOffset,
  double minVoltage, 
  double maxVoltage,
  Project2::Time period)
  : PeriodicSignal(
    voltageOffset, 
    timeOffset, 
    minVoltage, 
    maxVoltage, 
    period) {}

double 
Project2::SawtoothSignal::getVoltageAtTime(Project2::Time t) const
{
  double voltageOffset = getVoltageOffset();
  double max = getMaxVoltage();
  double min = getMinVoltage();
  double diff = max - min;
  t += getTimeOffset();
  int timeSum = t.getTotalTimeAsSeconds();
  double period = getPeriod().getTotalTimeAsSeconds();

  return (voltageOffset + min + std::fmod((timeSum * diff / period), diff));
}
