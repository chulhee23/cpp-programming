#include<iostream> 
using namespace std;

int main(int argc, char const *argv[]){
  int n, time;
  cin >> n >> time;

  // int *arr = new int[n];
  // int *next = new int[n];
  int arr[n];
  int next[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    next[i] = arr[i];
  }

  for(int t = 0; t < time; t++){
    // 이웃 검사
    for (int i = 0; i < n; i++)
    {
      arr[i] = next[i];
    }
    
    for(int i = 0; i < n; i++){
      int nei_sum = 0;
      if(i == 0){
        nei_sum += arr[1];
      } else if (i == n-1){
        nei_sum += arr[n-2];
      } else {
        nei_sum += arr[i-1] + arr[i+1];
      }

      if (nei_sum < 3){
        if(next[i] > 0){
          next[i] -= 1;
        }
      }
      else if (nei_sum >= 4 && nei_sum < 8){
        if(next[i] < 9){
          next[i] += 1;
        }
      }
      else if (nei_sum > 7){
        if (next[i] > 0)
        {
          next[i] -= 1;
        }
      }

      
    }
    

  }
  for(int i = 0; i < n ; i++){
    cout << next[i] << " ";
  }
  

  // cout << arr.size(); 불가능
  // 실행 될때 int size가 실행되기전 할당을 받기 때문에 할당할 양을 알지 못한다.
  // 컴파일 타임에 메모리가 결정되지만,
  // int size = 5는 런타임에 크기가 결정된다. 그러므로 크기를 알 수 없다

  // delete[] arr;
  // delete[] next;

  return 0;

}