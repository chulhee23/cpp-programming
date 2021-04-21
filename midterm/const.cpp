#include <iostream>
using namespace std;

int f(int param = 0){
  param += 1;
  return param;
}
int main(int argc, char const *argv[])
{
  const int one = 1;
  int r;
  r = f(one);
  // one = 2;
  cout << r;
  return 0;
}
