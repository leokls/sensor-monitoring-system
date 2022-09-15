#include "MonitoringSystem.h"

// Constructor.
Project2::MonitoringSystem::MonitoringSystem(ostream& out)
	: out(out)
{
	
}

// Add new sensor for monitoring to the set of sensors being monitored.
void
Project2::MonitoringSystem::addSensor(Project2::Sensor *s)
{
	sensors.push_back(s);
}

void
Project2::MonitoringSystem::takeReading(Project2::Time t)
{
	for (size_t i = 0; i < sensors.size(); ++i)
	{	
		// DataRecorder outputs the metrics to the standard out.
		Project2::DataRecorder dr(out);
		dr.log(
			t,
			(*sensors[i]).getName(),
			(*sensors[i]).getSource().getVoltageAtTime(t),
			(*sensors[i]).getUnits()
		);
	}
}
