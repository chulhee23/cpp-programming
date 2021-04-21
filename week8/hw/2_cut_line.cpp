// 절단 대각선

#include<iostream> 
using namespace std;



int main(int argc, char const *argv[]){
  int n;
  cin >> n;
  int arr[n][n];
  int right[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> arr[i][j];
      right[i][n-j-1] = arr[i][j];
    }
  }

  int sum = 0;
  // left
  // 0 ~ n // 2
  for (int i = 0; i < n - 1; i++){
    if(i == 0){
      // 주대각
      int tmp = 0;
      for(int j = 0; j < n; j++){
        tmp += arr[j][j];
      }
      sum = max(sum, tmp);
    } else {
      int top = 0;
      int bottom = 0;
      // 위 영역
      int j = 1;
      while(i - j >= 0){
        top += arr[i-j][n-j];
        j++;
      }
      // 아래 영역
      int k = i;
      for(int k = i; k < n; k++){
        bottom += arr[k][k-i];
      }      

      sum = max(sum, top+bottom);
    }

    // right
    for (int i = 0; i < n - 1; i++){
      if(i == 0){
        // 주대각
        int tmp = 0;
        for(int j = 0; j < n; j++){
          tmp += right[j][j];
        }
        sum = max(sum, tmp);
      } else {
        int top = 0;
        int bottom = 0;
        // 위 영역
        int j = 1;
        while(i - j >= 0){
          top += right[i-j][n-j];
          j++;
        }
        // 아래 영역
        int k = i;
        for(int k = i; k < n; k++){
          bottom += right[k][k-i];
        }      

        sum = max(sum, top+bottom);
      }
    }




  }

  cout << sum;


  
  
  
}

