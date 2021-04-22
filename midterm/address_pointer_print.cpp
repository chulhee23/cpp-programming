#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int i = 1;
  int *p = &i;
  int &r = i;

  cout << "i " << i << endl;
  cout << "&i " << &i << endl;
  // cout << "*i " << *i << endl;
  cout << "p " << p << endl;
  cout << "*p " << *p << endl;
  cout << "&r " << &r << endl;
  cout << "r " << r << endl;



  cout << "const test" << endl;

  // const int *p1;
  // *p1 = &i;
  // cout << "*p1 " << *p1 << endl;
  // cout << "p1 " << p1 << endl;

  cout << sizeof('a') << endl;
  // int* const p2 = 100;
  // cout << "*p2 " << *p2 << endl;


}
