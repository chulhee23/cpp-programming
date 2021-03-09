#include <iostream>

using namespace std;

int main(void)
{
  float n1, n2, avg;

  cout << "average!!\n";
  cout << "First Number? \n";

  cin >> n1;
  cout << "Second Number? \n";
  cin >> n2;

  avg = (n1 + n2) / 2;

  cout << "The average is " << avg << endl;

  return 0;
}