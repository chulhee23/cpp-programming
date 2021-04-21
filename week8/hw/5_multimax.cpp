#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  vector<int> arr;

  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    arr.push_back(tmp);
  }
  sort(arr.begin(), arr.end(), greater<int>());
  int ans;
  if (arr[0] >= 0 && arr[1] >= 0 && arr[2] >= 0 ){
    ans = arr[0] * arr[1] * arr[2];
    ans = max(ans, arr[0] * arr[1]);
    ans = max(ans, arr[0] * arr[n-1] * arr[n-2]);

  } 
  else if(arr[0] >= 0 && arr[1] >= 0 && arr[2] < 0 ){
    ans = arr[0] * arr[1];
    ans = max(ans, arr[0] * arr[n-1] * arr[n-2]);
    ans = max(ans, arr[n-1] * arr[n-2]);

  }
  else if(arr[0] >= 0 && arr[1] < 0 && arr[2] < 0 ){
    ans = arr[0] * arr[1] * arr[2];
    ans = max(ans, arr[0] * arr[n-1] * arr[n-2]);
    ans = max(ans, arr[n-1] * arr[n-2]);
    
  }
  else if(arr[0] < 0 && arr[1] < 0 && arr[2] < 0 ){
    ans = arr[n-1] * arr[n-2];

  }

  cout << ans;
}

