#include <iostream>
#include <cmath>
using namespace std;

int getDistance(int a, int s, int m){
  if (a > m)
  {
    return abs(a - m);
  }
  else
  {
    return abs(a - s);
  }
}

void Square(){
  int sx, sy, mx, my;
  cin >> sx >> sy >> mx >> my;

  int ax, ay;
  cin >> ax >> ay;

  bool x_axis_include = false;
  bool y_axis_include = false;
  int dx, dy = 0;

  if (ax >= sx && ax <= mx)
  {
    x_axis_include = true;
  }

  if (ay >= sy && ay <= my)
  {
    y_axis_include = true;
  }

  if (x_axis_include && y_axis_include)
  {
    cout << 0 << " " << 0;
    return;
  }

  if (x_axis_include && y_axis_include == false)
  {
    dy = getDistance(ay, sy, my);

    cout << pow(dy, 2) << " " << dy;
    return;
  }

  if (y_axis_include && x_axis_include == false)
  {
    dx = getDistance(ax, sx, mx);
    
    cout << pow(dx, 2) << " " << dx;
    return;
  }

  if (y_axis_include == false && x_axis_include == false)
  {
    dx = getDistance(ax, sx, mx);
    dy = getDistance(ay, sy, my);
    

    cout << pow(dx, 2) + pow(dy, 2) << " " << dx + dy;
    return;
  }

}


int main()
{
  Square();  
}
