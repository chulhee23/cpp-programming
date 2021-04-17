#include <iostream>
#include "Time.h"
using namespace std;

void Time::setTime(int h, int m, int s)
{
  hour = (h >= 0 && h < 24) ? h : 0;
  minute = (m >= 0 && m < 60) ? m : 0;
  second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printTime24()
{
  cout << (hour < 10 ? "0" : "") << hour << ":"
        << (minute < 10 ? "0" : "") << minute;
}

void Time::printTime12()
{
  cout << (hour < 12 ? "AM" : " PM")
        << ((hour == 0 || hour == 12) ? 12 : hour % 12)
        << ":" << (minute < 10 ? "0" : "") << minute
        << ":" << (second < 10 ? "0" : "") << second
        << "\n";
}
