#include <iostream>
#include <set>
#include <vector>
using namespace std;

typedef unsigned int uint;
const uint umax = 0xffffffff;

void appendHamming(set<uint> &hamming, uint n)
{
  // 끝까지 탐색 못함 -> 트리안에 포함 X
  if(hamming.find(n) == hamming.end())
  {
    hamming.insert(n);

    if (n < umax / 2)
      appendHamming(hamming, n * 2);
    if (n < umax / 3)
      appendHamming(hamming, n * 3);
    if (n < umax / 5)
      appendHamming(hamming, n * 5);
    // append 해도 자동 정렬
  }
}

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;

  set<uint> hamming;
  appendHamming(hamming, 1);
  vector<uint> v(hamming.begin(), hamming.end());
  
  cout << v[n-1];
  
  return 0;
}
