#include <iostream>
using namespace std;

class Time
{
private:
  int hour;
  int minute;
  int second;

public:
  void setTime(int, int, int);
  void printTime12(); // 12시간 단위 출력
  void printTime24(); // 24시간 단위 출력
};

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
  cout << (hour < 12 ? "오전" : " 오후 ")
        << ((hour == 0 || hour == 12) ? 12 : hour % 12)
        << ":" << (minute < 10 ? "0" : "") << minute
        << ":" << (second < 10 ? "0" : "") << second
        << "\n";
}

int main()

{
// -수업 시간 : (12시간) 오전 11:00:00, (24시간) 11:00
// -점심 시간 : (12시간) 오후 12:30:00, (24시간) 12:30
// -저녁 시간 : (12시간) 오후 6:30:20, (24시간) 18:30
// -취침 시간 : (12시간) 오전 12:30:00, (24시간) 00:30

  string timeTable[] = {"수업 시간", "점심 시간", "저녁 시간", "취침 시간"};
  int hours[]  = {11, 12, 18, 0};
  int minutes[]  = {0, 30, 30, 30};
  int seconds[]  = {0, 0, 20, 0};
  for (int i = 0 ; i < 4; i++)
  {
    Time t; // instantiates object t of class Time

    t.setTime(hours[i], minutes[i], seconds[i]);

    cout << "\n" << timeTable[i] <<  "은 24시간 모드로 ";

    t.printTime24();

    cout << "\n12시간 모드로는 ";

    t.printTime12();
  }
  
  return 0;
}
