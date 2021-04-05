#include <iostream>

using namespace std;



int** makeArray2D(int row_size, int col_size){

   int** ary;

 

   ary = new int* [row_size];

   for (int i = 0; i < row_size; i++)

       ary[i] = new int[col_size];

 

   return ary;

}


int*** makeArray3D(int row_size, int col_size, int y_size){

    int*** ary;

    ary = new int** [y_size];

    for (int i = 0; i < row_size; i++)

       ary[i] = makeArray2D(row_size, col_size);

    return ary;
}

 

void deleteArray2D(int** ary, int rows){

   for (int i = 0; i < rows; i++)

       delete[] ary[i];

   delete[] ary;

}

void deleteArray3D(int*** ary, int rows, int y){

   for (int i = 0; i < y; i++)

       deleteArray2D(ary[i], rows);

   delete[] ary;

}


int main(){

   int*** ary;

   int rows = 10, cols = 10, y = 10;
   int cnt = 0;
 

   ary = makeArray3D(rows, cols, y);

   for (int i = 0; i < y; i++)
        for (int j = 0; j < rows; j++)
            for(int k =0; k < cols; k++) {
                ary[i][j][k] = cnt++;
            }

   for (int i = 0; i < y; i++){

        for (int j = 0; j < rows; j++){

            for(int k =0; k< cols; k++) cout << ary[i][j][k] << " ";
            cout << endl;

            }

       cout << endl;
   }

   deleteArray3D(ary, rows, y);

    return 0;

}