
#include <iostream>
using namespace std;

int **makeArray2D(int row_size, int col_size)
{
  int **arr;
  arr = new int *[row_size];
  for (int i = 0; i < row_size; i++)
    arr[i] = new int[col_size];
  return arr;
}

void deleteArray2D(int **arr, int rows)
{
  for (int i = 0; i < rows; i++)
    delete[] arr[i];
  delete[] arr;
}

int main()
{
  int **arr;
  int rows = 10, cols = 10;
  arr = makeArray2D(rows, cols);

  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
      arr[i][j] = i * rows + j;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      cout << arr[i][j] << ' ';
    cout << endl;
  }

  deleteArray2D(arr, rows);

  return 0;
}

int ***makeArray3D(int x, int y, int z){
  int ***arr;
  arr = new int **[x];

  for (int i = 0; i < x; i++)
    arr[i] = makeArray2D(y, z);

  return arr;
}

void deleteArray3D(int ***arr, int x, int y){
  for (int i = 0; i < x; i++)
    deleteArray2D(arr[i], y);

  delete[] arr;
}
