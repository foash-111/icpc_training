#include <iostream>
#include<math.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
  int x, temp, space, cols;

   cin>>x;
   cols = (x * 2) + 1;
   space = x - 1;
   temp = 1;
   
   for(int i = 1; i <= x; i++){
    for(int k = 0; k < space; k++){
        cout<<" ";
    }
    space--;
    for(int j = 1;j <= temp && temp <= cols; j++) {
        cout<<"*";
    }
    temp += 2;
    cout<<endl;
   }
    return 0;
}
