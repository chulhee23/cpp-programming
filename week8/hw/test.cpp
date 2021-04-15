#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

typedef unsigned int uint;

const uint umax = 0xffffffff;

void spread(std::set<uint> &hamming, uint n)
{
  if (hamming.find(n) == hamming.end())
  {
    hamming.insert(n);

    if (n < umax / 2)
      spread(hamming, n * 2);
    if (n < umax / 3)
      spread(hamming, n * 3);
    if (n < umax / 5)
      spread(hamming, n * 5);
  }
}

int main()
{
  std::set<uint> hamming;

  spread(hamming, 1);

  std::vector<uint> ordered(hamming.begin(), hamming.end());

  for (size_t i = 0; i < ordered.size(); i++)
  {
    std::cout << i << ' ' << ordered[i] << '\n';
  }

  return 0;
}