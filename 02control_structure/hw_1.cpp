// 정수 삼각형
#include <iostream>

using namespace std;

int main()
{
  int k;
  int count;
  cin >> k;
  int n = 1;
  for (int row = 1; row <= k; row++)
  {
    count = 0;
    for (; count < row; count++, n++)
    {
      cout << n << ' ';
    }
    cout << endl;
  }
  
  

}
