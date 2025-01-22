#include <iostream>
using namespace std;

int main(){
   int i;
   int x,y,z;
   int mid;
   cin>>i;
   while(i--){
    cin>>x>>y>>z;
    mid = (x + y + z) - ((max(x, max(y, z)) + min(x, min(y, z))));
    cout <<  mid <<endl; 
   } 
    return 0;
}
