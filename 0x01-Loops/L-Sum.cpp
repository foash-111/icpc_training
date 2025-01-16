#include <iostream>
using namespace std;

int main(){
   int i;
   int x,y,z;
   cin>>i;
   while(i--){
    cin>>x>>y>>z;

    ((x == y + z) || (z == x + y) || (y == x + z))  ? cout << "YES"<<endl : cout << "NO"<<endl; 
   } 
    return 0;
}
