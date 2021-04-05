#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp;
  temp = *b;
  *b = *a;
  *a = temp;
}

void bubble_sort(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (array[j] > array[j + 1])
      { 
        swap(&array[j], &array[j + 1]);
      }
    }
  }
}

int main()
{
  const int SIZE = 100;
  int array[SIZE];
  srand((unsigned)time(0));
  for (int i = 0; i < SIZE; i++)
  {
    array[i] = (rand() % 100) + 1;
    cout << array[i] << ' ';
  }
  cout << endl << "========" << endl;
  bubble_sort(array, SIZE);
  
  for (int i = 0; i < SIZE; i++)
  {
    
    cout << array[i] << ' ';
  }

}