#include "SineSignal.h"
#include "Time.h"

#include <cmath>

Project2::SineSignal::SineSignal(
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

Project2::SineSignal::~SineSignal()
{

}

double Project2::SineSignal::getVoltageAtTime(Project2::Time t) const
{
  double voltageOffset = getVoltageOffset();
  double max = getMaxVoltage();
  double min = getMinVoltage();
  double diff = max - min;
  t += getTimeOffset();
  int timeSum = t.getTotalTimeAsSeconds();
  double period = getPeriod().getTotalTimeAsSeconds();
  double sine = sin(timeSum * 2 * Project2::PI / period);

  return (voltageOffset + min + diff / 2 + sine * diff / 2);
}
