#include <iostream>
#include<math.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
  int x, temp, space_in, space_out, temp_in = 0, temp_out = 0, flag = 1;

   cin>>x;
   space_out = (x - 1) / 2;
   space_in = x - 2;
   temp_out = space_out;
   temp_in = 1;
   temp = 1;


   for(int i = 1; i <= x; i++){

    if(i == 1 || i == x) {
        for(int l = 0; l < space_out; l++){
            cout<<' ';
        }
        cout<<'*';
    }
else {
    temp_out--;
     for(int k = 1; k <= temp_out; k++){
        cout<<" ";
        }

    cout<<"*";

        for(int k = 1; k <= temp_in; k++){
            cout<<" ";
        }

    cout<<"*";
    temp_in += 2;

    if(flag){
        if(temp_in == space_in){
            flag = 0;
        }
    }
    else {
        temp_out += 2;
        temp_in -= 4;
    }


}

    cout<<endl;
   }
    return 0;
}
