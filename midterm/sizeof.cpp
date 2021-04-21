#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  cout << "string " << endl;
  char a[10] = "012345678";
  cout << sizeof(59.1) << " " << sizeof(a[1]) << " " << sizeof("A") << endl;
  // 8 1 2
  
  cout << "nums " << endl;
  int aa[10] = {1,2,3 };
  cout << sizeof(aa) << " " << sizeof(aa[0]); // 40 4
  return 0;
}
