//writing a program to print transpose of a matrix
#include <iostream>
using namespace std;
int main() {
   int a[10][10],trans[10][10],i,j,row,col,;
   cout << "Enter number of rows and columns of matrix respectively: ";
   cin >> row >> col;
   cout << "Enter elements inside matrix:"<<endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << "a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }
   cout << "Matrix a: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << " " << a[i][j];
         if (j == col-1)
            cout << endl << endl;
      }
   }
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         trans[j][i] = a[i][j];
      }
   cout << "Transpose of Matrix: " << endl;
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << trans[i][j];
         if (j == row-1)
            cout << endl << endl;
      }
   return 0;
}