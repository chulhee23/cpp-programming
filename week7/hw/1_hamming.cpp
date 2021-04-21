#include <iostream>
#include <set>
using namespace std;

void appendHamming(set<int> hamming, int n, int goal)
{
  if (hamming.find(n) == hamming.end())
  {
    hamming.insert(n);

    if (goal < hamming.size()){
      appendHamming(hamming, 2*n , goal);
      appendHamming(hamming, 3*n , goal);
      appendHamming(hamming, 5*n , goal);

    }

  }

}

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  set<int> hamming;
  appendHamming(hamming, 1, n);
  cout << hamming[n-1];
  return 0;

}
