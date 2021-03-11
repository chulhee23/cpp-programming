#include <iostream>
using namespace std;

int main()
{
  int i, sum;
  i = sum = 0;
  cout << "while loop ..." << endl;
  while (i <= 100){
    if (i % 2 == 0)
      sum += i;
    i++;
  }
  cout << sum << endl;
  cout << "for loop ..." << endl;
  for (i = sum = 0; i <= 100; i++){
    if (i % 2 == 0){
      sum += i;
    }
  }
  cout << sum << endl;
  cout << "do while loop ..." << endl;
  i = sum = 0;
  do
  {
    if (i % 2 == 0){
      sum += i;
    }
    i++;
  } while (i <= 100);
  cout << sum << endl;
}
