#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // 양 a 만큼
  // 염소 b 만큼
  // 양 n 마리
  // 사료 w
  int a, b, n, w;
  cin >> a >> b >> n >> w;

  int lamb;
  if (a != b && (w - b * n) % (a - b) == 0)
  {
    lamb = (w - b* n) / (a - b);
  }
  else
  {
    lamb = -1;
  }
  int goat = n - lamb;

  if (goat < 1 || lamb < 1){
    cout << -1;
  } else {
    cout << lamb << " " << goat;
  }
  

}