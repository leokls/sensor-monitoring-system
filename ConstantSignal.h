#ifndef PROJECT2_CONSTANTSIGNAL_H
#define PROJECT2_CONSTANTSIGNAL_H

#include "Signal.h"
#include "Time.h"

namespace Project2
{
  class ConstantSignal : public Project2::Signal
  {
    public:
      ConstantSignal(double voltageOffset, Project2::Time timeOffset);
      virtual double getVoltageAtTime(Project2::Time t) const;    
  };
}

#endif
