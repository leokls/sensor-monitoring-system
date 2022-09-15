#ifndef PROJECT2_PERIODICSIGNAL_H
#define PROJECT2_PERIODICSIGNAL_H

#include "Time.h"
#include "Signal.h"

namespace Project2
{
  class PeriodicSignal : public Project2::Signal
  {
    public:
      PeriodicSignal(
        double voltageOffset, 
        Project2::Time timeOffset, 
        double minVoltage, 
        double maxVoltage, 
        Project2::Time period);
      virtual ~PeriodicSignal();
      virtual double getVoltageAtTime(Project2::Time t) const = 0;
      double getMinVoltage() const;
      double getMaxVoltage() const;
      Project2::Time getPeriod() const;
    private:
      double minVoltage;
      double maxVoltage;
      Project2::Time period;
  };
}

#endif
