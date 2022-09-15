#ifndef PROJECT2_SINESIGNAL_H
#define PROJECT2_SINESIGNAL_H

#include "PeriodicSignal.h"
#include "Time.h"

namespace Project2
{
  double const PI = 3.14159265358979323846;

  class SineSignal : public PeriodicSignal
  {
    public:
      SineSignal(
        double voltageOffset, 
        Project2::Time timeOffset,
        double minVoltage, 
        double maxVoltage,
        Project2::Time period);
      
      virtual ~SineSignal();
      
      // V(t) = voltageOffset + min + (max - min) / 2
      // + sine((t + timeOffset) * 2 * PI / period) * (max - min) / 2
      virtual double getVoltageAtTime(Project2::Time t) const;
  };
}

#endif
