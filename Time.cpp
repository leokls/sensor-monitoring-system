#include "Time.h"

using namespace std;

Project2::Time::Time(int hours, int minutes, int seconds)
  : hours(hours), minutes(minutes), seconds(seconds) 
{

}

int Project2::Time::getTotalTimeAsSeconds() const
{
  return (seconds + (minutes * Project2::MIN_TO_SEC) + 
    (hours * Project2::HOUR_TO_SEC));
}

Project2::Time& Project2::Time::operator+=(const Project2::Time& rhs)
{
  int totalSeconds = getTotalTimeAsSeconds() + rhs.getTotalTimeAsSeconds();
  this->hours = totalSeconds / Project2::HOUR_TO_SEC;              // hours
  totalSeconds -= this->hours * Project2::HOUR_TO_SEC;
  this->minutes = totalSeconds / Project2::MIN_TO_SEC;             // minutes
  totalSeconds -= this->minutes * Project2::MIN_TO_SEC;
  this->seconds = totalSeconds;                                    // seconds
  return *this;
}

ostream& Project2::operator<<(ostream &os, const Project2::Time& rhs)
{
  if (os)
    os << rhs.hours << "h:" << rhs.minutes << "m:" << rhs.seconds << "s";
  return os;
}
