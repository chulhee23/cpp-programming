#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

  int x[3];
  int y[3];
  for (int i = 0; i < 3; i++)
    cin >> x[i] >> y[i];


  int ans = ((x[1] - x[0])*(y[2] - y[0]) - (x[2] - x[0]) * (y[1] - y[0]));
  int clockwise = 1;
  if (ans < 0) {
    clockwise = -1;
  } else if (ans == 0){
    clockwise = 0;
  }


  cout << abs(ans) << " " << clockwise;
  
  return 0;
}
