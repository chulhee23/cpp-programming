#include <iostream>
using namespace std;


int main()
{
  int row;
  
  cin >> row;
  

  for (int i = 0; i < row; i++)
  {

    if (i != (row - 1) / 2){
      // y axis
      for (int j = 0; j < row; j++){
        if (j == row - i - 1){
          cout << "*";
        } else if (j == (row - 1) / 2){
          cout << "I";
        } else {
          cout << ".";
        }
      }
      cout << endl;

    } else {
      // x axis
      for (int j = 0; j < row; j++) {
        if (j != (row - 1) / 2)
          cout << "+";
        else 
          cout << "O";
      }
      cout << endl;
    }
  }

  return 0;
}

