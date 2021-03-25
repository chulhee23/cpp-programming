#include <iostream>
using namespace std;

void Compare(int hx1, int hx2, int hy, int vx, int vy1, int vy2)
// hx: horizontal x
// vx: vertical x
{

  if (hx1 < vx && vx < hx2){
    if (vy1 < hy && hy < vy2)
    {
      cout << 1;
    }
    else if(vy1 == hy || vy2 == hy)
    {
      cout << 2;
    }
    else
    {
      cout << 0;
    }
  }
  // x 사이 아니면
  else if ((hx1 == vx || hx2 == vx) && (vy1 <= hy && hy <= vy2))
    {
      cout << 2;
    }
  else
  {
    cout << 0;
  }
}

int main()
{
  // 0 만나지 않음
  // 1 교차
  // 2 접함

  int x1, y1, x2, y2;
  int x3, y3, x4, y4;
  
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> x3 >> y3 >> x4 >> y4;
  
  if (x1 == x2){
    Compare(min(x3, x4), max(x3, x4), y3, x1, min(y1, y2), max(y1,y2));
  } 
  else 
  {
    Compare(min(x1, x2), max(x1, x2), y1, x3, min(y3, y4), max(y3, y4));
  }
}