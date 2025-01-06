#include<iostream>
#include<string>
using namespace std;

int main(){
   int x, y;
   cin>> x>> y;
   (x % y) == 0 || (y % x) == 0 ? cout<<"Multiples"<<endl : cout<< "No Multiples"<<endl;
    return 0;
}
