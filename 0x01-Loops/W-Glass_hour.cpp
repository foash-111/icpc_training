#include <iostream>
#include<math.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
  int x, temp, space, temp_space = 0, flag_st = 1, flag_nd = 1;

   cin>>x;
   space = (x - 1) / 2;
   temp_space = 0;
   temp = x;


   for(int i = 0; i <= x; i++){
    for(int k = 1; k <= temp_space; k++){
        cout<<" ";
    }

    if (flag_st) {
        if(temp_space == space)
        {
            flag_st = 0;
            temp_space --;
        }
        temp_space++;
    }
    else temp_space--;

    for(int j = 1;j <= temp; j++) {
        cout<<"*";
    }
    if(flag_nd) {
    if (temp == 1) flag_nd = 0, temp += 2;
    temp -= 2;
    } 
    else temp += 2;
    cout<<endl;
   }
    return 0;
}
