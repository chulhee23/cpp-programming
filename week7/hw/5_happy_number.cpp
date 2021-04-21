#include <vector>
#include <set>
#include <iostream>
#include <string>
using namespace std;

int makeSquareNumber(int n){
  string x = to_string(n);
  int temp = 0;
  for (int i = 0; i < x.size(); i++)
  {
    int num = x[i] - '0';
    temp += num * num;
  }
  return temp;
  
}

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  set<int> visited;
  
  // 못찾음
  while (visited.find(n) == visited.end())
  {
    visited.insert(n);
    n = makeSquareNumber(n);
    if (n == 1){
      cout << "HAPPY";
      return 0;
    }
  }

  cout << "UNHAPPY";

  return 0;
}
