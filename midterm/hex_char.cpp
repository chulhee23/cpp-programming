#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  char s[10] = {48, '0', '\'', 0x30, '\060', '\x31', 'a', '\0', 'b' };
  
  cout << s << endl;
  return 0;
}
