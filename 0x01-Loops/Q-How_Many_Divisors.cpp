#include <iostream>
using namespace std;


int main(){
  int x, y, z;
  int counter = 0;
    cin>>x>>y>>z;

   while(x <= y) {
    if (z % x == 0){
    counter++;
    }
   x++;
   }
   cout<<counter<<endl;
    return 0;
}
