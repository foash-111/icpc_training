#include <iostream>
#include<math.h>
using namespace std;

int main(){
  int x, temp, mid;

   cin>>x;
   mid = (x / 2) + 1;
   
   for(int i = 1; i <= x; i++){
    for(int j = 1; (j <= i) && (j <= mid); j++) {
        cout<<"*";
    }
    if (i >= mid) mid--;
    cout<<endl;
   }
    return 0;
}
