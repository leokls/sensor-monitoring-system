#ifndef PROJECT2_SIGNAL_H
#define PROJECT2_SIGNAL_H

#include "Time.h"

namespace Project2
{
  class Signal
  {
    public:
      // Constructor
      Signal(double voltageOffset, Project2::Time timeOffset);
      // Destructor
      virtual ~Signal();
      
      // Accessors
      virtual double getVoltageAtTime(Project2::Time t) const = 0;
      double getVoltageOffset() const;
      Project2::Time getTimeOffset() const; 
    
    private:
      double voltageOffset;
      Project2::Time timeOffset;
  };
}

#endif
