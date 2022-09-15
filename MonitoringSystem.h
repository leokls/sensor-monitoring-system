#include "Sensor.h"
#include "Time.h"

#include <iostream>
#include <vector>
using namespace std;

namespace Project2 
{
  class MonitoringSystem
  {
    public:
      // Constructor
      MonitoringSystem(ostream& out);

      // Sensors that the system will check in with. 
      void addSensor(Project2::Sensor *s);

      // Log the sensor's current voltage being observed.
      void takeReading(Project2::Time t);
    private:
      vector <Project2::Sensor*> sensors;
      ostream &out;
  };
}
