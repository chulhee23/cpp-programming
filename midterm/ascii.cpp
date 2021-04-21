#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
  char c = 'a';
  char c1 = '\141'; // a  ?? 
  char c2 = '\x61'; // hex = a
  char c3 = '\060'; // 0  ??
  char c4 = '\60'; // 0  ??
  char c5 = '\061'; // 0  ??
  char c6 = '\61'; // 0  ??

  cout << c << endl;
  cout << c1 << endl;
  cout << c2 << endl;
  cout << c3 << endl;
  cout << c4 << endl;
  cout << c5 << endl;
  cout << c6 << endl;

  cout << endl;
  cout << "beep sound char is "  << 7 << endl;
  cin >> c;
  
  cout << "beep sound char is "  << '\7' << endl;
  cin >> c;

  cout << "beep sound char is "  << '\a' << endl;

}