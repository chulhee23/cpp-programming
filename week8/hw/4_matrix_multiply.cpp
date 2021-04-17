#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int r, s, t;
  cin >> r >> s >> t;

  int a[r][s], b[s][t], mul[r][t];

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < s; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < t; j++) {
      cin >> b[i][j];
    }
  }
  // 초기화에 주의
  // 쓰레기 값이 들어있다
  // for (int i = 0; i < r; i++) {
  //   for (int j = 0; j < t; j++) {
  //     cout << mul[i][j] << " ";
  //   }
  //   cout << endl;
  // }


  for(int i = 0; i < r; i++){
    for(int j = 0; j < t; j++){
      int temp = 0;
      for (int k = 0; k < s; k++){
        temp += a[i][k] * b[k][j];
      }    
      mul[i][j] = temp;
    }
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < t; j++)
    {
      cout << mul[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

