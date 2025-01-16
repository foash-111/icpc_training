#include <iostream>
using namespace std;

int main(){
   int i;
   int x,y,z;
   cin>>i;
   while(i--){
    cin>>x>>y>>z;

    ((x + y >= 10) || (x + z >= 10) || (y + z >= 10))  ? cout << "YES"<<endl : cout << "NO"<<endl; 
   } 
    return 0;
}
