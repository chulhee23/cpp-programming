#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{

  int n;
  cin >> n;
  vector<unsigned long long> v = {1, 2, 3, 5};
  vector<int> s = {2, 3, 5};

  unsigned long long k = 0;
  while (v.size() <= 4500)
  {
    int m = v.size();
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        k = v[i] * s[j];
        v.push_back(k);
      }
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
  }
  //for (int i = 0; i<1350; i++)
  //   cout << v[i] << ' ';
  //cout << endl;
  cout << v[n - 1];

  return 0;
}