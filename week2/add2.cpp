#include <iostream>

using namespace std;

int main(void)
{
  int n1, n2, total;

  cout << "Add two Numbers!\n";
  cout << "First Number? \n";

  cin >> n1;
  cout << "Second Number? \n";
  cin >> n2;

  total = n1 + n2;

  cout << "The total is " << total << endl;

  return 0;
}