#ifndef PROJECT2_SENSOR_H
#define PROJECT2_SENSOR_H

#include <string>

#include "Signal.h"
#include "Time.h"
#include "DataRecorder.h"

using namespace std;

namespace Project2
{
  class Sensor
  {
    public:
      // Constructor
      Sensor(string name, Project2::Signal &source);
      virtual ~Sensor();

      void takeReading(Project2::Time t, Project2::DataRecorder &recorder) const;
      
      virtual string getUnits() const = 0;
      string getName() const;
      Project2::Signal &getSource() const;
    
    private:
      string name;
      Project2::Signal &source;
  };
}

#endif
