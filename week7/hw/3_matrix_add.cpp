#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int m, n;
  cin >> n >> m;

  int a[n][m], b[n][m], sum[n][m];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> b[i][j];
    }
  }


  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << sum[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

