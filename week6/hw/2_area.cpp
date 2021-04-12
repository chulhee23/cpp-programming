#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  int *x = new int[n];
  int *y = new int[n];
  for (int i = 0; i < n; i++)
    cin >> x[i] >> y[i];

  int area = 0;

  for (int i = 0; i < n; i++)
  {
    int tmp;
    if (i + 1 == n) {
      tmp = (x[i] + x[0]) * (y[0] - y[i]);
    }

    else {
      tmp = (x[i] + x[i + 1]) * (y[i + 1] - y[i]);
    }
    area += tmp;

  }
  int clockwise = 1;
  if (area < 0)
  {
    clockwise = -1;
  }
  int ans = abs(area);
  cout << ans << " " << clockwise;


}
