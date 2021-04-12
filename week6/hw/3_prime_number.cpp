#include <iostream>
using namespace std;

bool IsPrime(int n){
  for (int i = 2; i * i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main(int argc, char const *argv[]){
  int n;
  cin >> n;
  bool ans = IsPrime(n);

  if(ans){
    cout << 1;
  } else {
    cout << 0;

  }


}