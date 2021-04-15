#include <iostream>
using namespace std;

void swap(int& x, int& y){
  int temp = x;
  x = y;
  y = temp;
}

void swapPointer(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(int argc, char const *argv[])
{
  int x = 10;
  int y = 20;

  swap(x, y);
  cout << x << ", " << y << endl;  
  swapPointer(&x, &y);
  cout << x << ", " << y << endl;

  int value1 = 5;
  int value2 = 7;
  int *ptr;
  ptr = &value1; 
  // ptr points to value1
  std::cout << ptr << endl;
  std::cout << *ptr << endl; 
  // prints 5 
  ptr = &value2; 
  // ptr now points to value2
  std::cout << ptr << endl;
  std::cout << *ptr << endl; 
  // prints 7

  int *p;
  cout << *p << endl;

}