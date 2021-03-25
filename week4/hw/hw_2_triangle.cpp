#include <iostream>
#include <cmath>
using namespace std;

int tri(){
  int ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;

  int x, y, z;
  x = pow((bx - ax), 2) + pow((by - ay), 2);
  y = pow((cx - bx), 2) + pow((cy - by), 2);
  z = pow((cx - ax), 2) + pow((cy - ay), 2);

  if (sqrt(x) >= sqrt(y) + sqrt(z) || sqrt(y) >= sqrt(y) + sqrt(x) || sqrt(z) >= sqrt(y) + sqrt(x))
  {
    return 0;
  }

  if (x == y+z || y == x+z || z == x+y)
  {
    return 1;
  }

  if (x > y+z || y > x+z || z > x+y)
  {
    return 2;
  }
  
  return 3;
}

int main()
{
  // 0 = 불가
  // 1, 2, 3 = 직각삼각형, 둔각삼각형, 예각삼각형
  cout << tri();
  
}