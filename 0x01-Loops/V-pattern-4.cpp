#include <iostream>
#include<math.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
  int x, temp, space, temp_space = 0, flag = 1;

   cin>>x;
   space = (x - 1) / 2;
   temp_space = space;
   temp = 1;


   for(int i = 1; i <= x; i++){
    for(int k = 1; k <= temp_space; k++){
        cout<<" ";
    }
    if (space) space--, temp_space--;
    else temp_space++;

    for(int j = 1;j <= temp; j++) {
        cout<<"*";
    }
    if(flag) {
    temp += 2;
    if (temp == x) flag = 0;
    } 
    else temp -= 2;
    cout<<endl;
   }
    return 0;
}
