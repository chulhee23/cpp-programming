#include <iostream>
using namespace std;

static int v = 10000;

int f1(){
  static int v = 1;
  v = v+1;
  cout << "current v local : " << v << endl;
  return v;
}

int i;

int main(int argc, char const *argv[])
{
  // int n;
  // cin >> n;
  // int a[n]; // 변수로 할당 시 가비지 값 들어있음
  // cout << "a[0] " << a[0] << endl; 
  
  int s = 0;
  cout << "v " << v << endl;
  cout << "i " << i << endl;
  for(int i =0; i < 3; i++){
    s = s+f1();
    cout << "current v (전역) : " << v << endl;

  }

  cout << s<< " " << i << " " << v << endl;
  return 0;
}
