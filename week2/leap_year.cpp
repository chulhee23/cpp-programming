#include <iostream>

using namespace std;

int main()
{
  int year;

  cout << "what year?";
  cin >> year;

  // 산술 연산자. 비교 연산자. 논리 연산자 순서로 우선순위.
  // 괄호를 굳이 하지 않아도 해결 가능!
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    cout << year << " is a leap year";
  else
    cout << year << " is not a leap year";
}
