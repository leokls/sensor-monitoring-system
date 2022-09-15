#ifndef PROJECT2_TIME_H
#define PROJECT2_TIME_H

#include <iostream>

using namespace std;

namespace Project2
{
  const int MIN_TO_SEC = 60;
  const int HOUR_TO_SEC = 60 * MIN_TO_SEC;

  class Time
  {
    // String extraction in format "__h:__m:__s"
    friend ostream& operator<<(ostream& os, const Time& rhs);


    public:
      // Constructor
      Time(int hours, int minutes, int seconds);

      // Accessor: returns the time converted to seconds
      int getTotalTimeAsSeconds() const;

      // Add given Time
      Time& operator+=(const Time& rhs);

    private:
      int hours;
      int minutes;
      int seconds;
  };

  ostream& operator<<(ostream &os, const Time& rhs);
}

#endif
