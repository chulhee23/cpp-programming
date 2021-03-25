#include <iostream>
using namespace std;

int main()
{
  // 정삼각형 1
  //  직각삼각형 2
  //  이등변삼각형 3
  //  그리고일반삼각형 4
  
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b <= c || a + c <= b || b + c <= a){
    cout << 0;
  } else {

    if (a == b && b == c)
    {
      cout << 1;
    }
    else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
    {
      cout << 2;
    } 
    else if (a == b || b == c || c == a)
    {
      cout << 3;
    }
    else 
    {
      cout << 4;
    }
  }

}