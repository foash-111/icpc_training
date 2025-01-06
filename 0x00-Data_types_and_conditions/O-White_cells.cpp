#include<iostream>
#include<string>
using namespace std;

int main(){
   int rows, cols;
   int nRows, nCols;

   cin >> rows>>cols>>nRows>>nCols;
   cout << (rows - nRows) * (cols - nCols)<<endl;
    return 0;
}
