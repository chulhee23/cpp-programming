// 합, 차, 차의절대값, 곱을출력한다.
// 또한 같은 줄에 계속해서 a를b로나누었을때의 몫과 나머지를 순서대로출력하고, 
// 그다음에a, b중에서 큰수를출력
// 마지막으로두자연수a, b가같은수일경우에는1을출력하고, 
// 그렇지않을경우에는0을 출력

#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // 합
  cout << (a+b) << ' ';
  // 차
  cout << (a-b) << ' ';
  // 차의 절댓값
  cout << abs(a-b) << ' ';
  // 곱
  cout << (a*b) << ' ';
  // 몫
  cout << (a / b) << ' ';
  // 나머지
  cout << (a % b) << ' ';

  if (a > b)
    cout << a << ' ';
  else 
    cout << b << ' ';
  
  if (a == b)
    cout << 1 << ' ';
  else
    cout << 0;
}
