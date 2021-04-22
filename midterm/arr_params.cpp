#include <iostream> 
using namespace std;

void sub(int a[]){
  a+= 1;
  *a = 1;
}

int main(int argc, char const *argv[])
{
  int a[10];
  cout <<a[0] << endl;
  cout <<a[1] << endl;
  cout <<a[2] << endl;
  cout <<a[9] << endl;

  sub(a);
  for(int i  = 0; i < 10; i++){
    cout <<a[i] << endl;
    
  }
  // cout <<a[1] << endl;
  // cout <<a[2] << endl;
  // cout <<a[9] << endl;
}