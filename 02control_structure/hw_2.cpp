#include <iostream>
using namespace std;

void draw(int i, int row);

int main()
{
  int row;
  int k;

  cin >> row;

  for (int i = 0; i < row; i++)
  {
    if (i * 2 < row)
      draw(i, row);
    else
    {
      k = row - i - 1;
      draw(k, row);
    }
  }

  return 0;
}

void draw(int i, int row)
{
  {
    for (int j = 0; j < i; j++)
      cout << "-";

    for (int j = 0; j < row - i * 2; j++)
      if (j % 2 == 0)
        cout << "*";
      else
        cout << "+";

    for (int j = 0; j < i; j++)
      cout << "-";
    cout << endl;
  }
}
