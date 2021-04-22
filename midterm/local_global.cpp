#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  char a[10];
  char b[10] = "ab";
  for(int i = 0; i < 10; i++){
    cout << a[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < 10; i++){
    cout << b[i] << " ";
  }
  return 0;
}



