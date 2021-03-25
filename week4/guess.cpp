#include <iostream>
#include "random.h"
using namespace std;

int main()
{
  Randomize();
  int n = RandomInteger(1, 100);
  
  cout << "answer: " << n << endl;
  n = RandomInteger(1, 100);
  cout << "answer: " << n << endl;
  n = RandomInteger(1, 100);
  cout << "answer: " << n << endl;




  cout << "guess what? (1 ~ 100)" << endl;
  int ans = 0;
  while (ans != n)
  {
    cin >> ans;
    if (ans == n){
      cout << "Correct." << endl;
      break;
      
    } 
    else if (ans > n){
      cout << "DOWN" << endl;
    }
    else {
      cout << "UP" << endl;

    }    
  } 
  return 0;

}
