#include <iostream>
#include <bitset>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int count = 0;

  string s = bitset<31>(n).to_string();
  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i];
    if(c == '1')
      count++;
  }
  
  
  if(count % 2 == 0)
  {
    // 짝수
    s = "0" + s;
  } 
  else {
    s = "1" + s;
  }
  

  unsigned int ans = 0;
  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i];
    if(c == '1')
    {
      ans += pow(2, s.length() - i - 1);
    }
  }
  
  cout << ans;
  
  return 0;
}
