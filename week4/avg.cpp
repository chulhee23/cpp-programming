#include <iostream>
using namespace std;

float average(const int array[], int size)
{
  float sum = 0;
  for (int i = 0; i < size; i++)
    sum += array[i];
  return sum / size;
}

int main()
{
  int size;
  cin >> size;
  cout << endl;
  int arr[size];

  for(int i=0; i < size; i++){
    cin >> arr[i];
  }
  cout << average(arr, size);

}