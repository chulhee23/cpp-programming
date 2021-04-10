#include <iostream>
using namespace std;

char *string_copy(char *dst, const char *src){

}

int main(int argc, char *argv[])
{
  const int size = 81;
  char s[size];

  cin.getline(s, size);

  char c[] = {};
  string_copy(c, s);

  for (int i = 0; i < size; i++)
  {
    if (s[i] == '\0')
      break;
    cout << s[i];
  }
  
}
