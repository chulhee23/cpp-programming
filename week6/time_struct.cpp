#include <iostream>
using namespace std;

struct Time
{
  int hour;
  int minute;
  int second;
};

void printTime12(const Time &t)
{
  cout << (t.hour < 12 ? "오전" : "오후")
    << ((t.hour == 0 || t.hour == 12) ? 12 : t.hour%12)
    << ":"
    << (t.minute < 10 ? "0" : "") << t.minute
    << ":"
    << (t.second < 10 ? "0" : "") << t.second
    << endl;
}

void printTime24(const Time &t)
{
  cout << (t.hour < 10 ? "0" : "") << t.hour
       << ":"
       << (t.minute < 10 ? "0" : "") << t.minute
       << ":"
       << (t.second < 10 ? "0" : "") << t.second
       << endl;
}

int main(int argc, char const *argv[])
{
  Time classTime;
  classTime.hour = 21;
  classTime.minute = 0;
  classTime.second = 0;

  printTime12(classTime);
  printTime24(classTime);

  return 0;
}
