#include <iostream>
using namespace std;

int main(){
  int x, temp;

   cin>>x;
   temp = x;
   for(int i = 0; i < x; i++){
    for(int j = temp; j > 0 ; j--){
        cout<<"*";
    }
    cout<<endl;
    temp--;
   }
    return 0;
}
