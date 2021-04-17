#include <iostream>
#include "time.cpp"
using namespace std;

int main(){
  string timeTable[] = {"수업 시간", "점심 시간", "저녁 시간", "취침 시간"};
  int hours[] = {11, 12, 18, 0};
  int minutes[] = {0, 30, 30, 30};
  int seconds[] = {0, 0, 20, 0};
  for (int i = 0; i < 4; i++)
  {
    Time t; // instantiates object t of class Time
    t.setTime(hours[i], minutes[i], seconds[i]);
    cout << "\n"
         << timeTable[i] << "은 24시간 모드로 ";
    t.printTime24();
    
    cout << "\n12시간 모드로는 ";
    t.printTime12();
  }
  return 0;
}
