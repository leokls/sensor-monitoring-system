#ifndef PROJECT2_SAWTOOTHSIGNAL_H
#define PROJECT2_SAWTOOTHSIGNAL_H

#include "PeriodicSignal.h"
#include "Time.h"

namespace Project2 
{
  class SawtoothSignal : public PeriodicSignal
  {
    public:
      SawtoothSignal(
        double voltageOffset, 
        Project2::Time timeOffset,
        double minVoltage, 
        double maxVoltage,
        Project2::Time period);

      // V(t) = 
      // voltageOffset + min + 
      // ((t + timeOffset) * (max-min) / period) % (max-min)
      virtual double getVoltageAtTime(Project2::Time t) const;
  };
}

#endif
