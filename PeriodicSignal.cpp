#include "PeriodicSignal.h"
#include "Time.h"

Project2::PeriodicSignal::PeriodicSignal(
  double voltageOffset, 
  Project2::Time timeOffset, 
  double minVoltage, 
  double maxVoltage, 
  Project2::Time period)
  : Signal(voltageOffset, timeOffset), 
    minVoltage(minVoltage), maxVoltage(maxVoltage), period(period) {}

Project2::PeriodicSignal::~PeriodicSignal()
{

}

double Project2::PeriodicSignal::getMinVoltage() const
{
  return minVoltage;
}

double Project2::PeriodicSignal::getMaxVoltage() const
{
  return maxVoltage;
}

Project2::Time Project2::PeriodicSignal::getPeriod() const
{
  return period;
}
