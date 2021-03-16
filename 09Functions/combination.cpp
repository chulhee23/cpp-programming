// 정수 삼각형
#include <iostream>
using namespace std;

int factorial(int n);
int comnination(int n, int k);

int main()
{
  int n, k;
  cin >> n >> k;
  int result = combination(n, k);

  cout << "result: " << n << "C" << k << "is " << result << endl;
}

int factorial(int n)
{
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

int combination(int n, int k)
{
  return factorial(n) / (factorial(k) * factorial(n - k));
}
