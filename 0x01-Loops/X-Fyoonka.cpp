#include <iostream>
#include<math.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
  int x, temp, space, temp_space = 0, flag = 1;

   cin>>x;
   space = x - 2;
   temp = 1;


   for(int i = 1; i <= x; i++){

    if(space == -1) {
        for(int j = 0; j < x; j++){
            cout<<'*';
        }
        flag =  0;
    }
    else{

    for(int k = 1; k <= temp; k++){
        cout<<"*";
    }
    for(int k = 1; k <= space; k++){
        cout<<" ";
    }
    for(int k = 1; k <= temp; k++){
        cout<<"*";
    }
    }



    if(flag){
       space -= 2;
        temp ++;
    }
    else {
        space += 2;
        temp--;
    }
    cout<<endl;
   }
    return 0;
}
