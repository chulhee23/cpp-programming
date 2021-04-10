#include <iostream>
using namespace std;



int main(int argc, char *argv[])
{
  cout << argc << endl;

  while (--argc > 0)
  {
    string s = *++argv;
    for (int i = 0; i < s.length(); i++)
    {
      
      cout << s[s.length() - i - 1];
    }
    cout << " ";
  }

  cout << "\n";
  return 0;
}
