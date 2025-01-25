#include<iostream>
using namespace std;
int main(){
    int x, arr[100] = {0};
    cin>>x;

   for(int i = 0; i < x; i++){
    cin>>arr[i];
   }
   for(int i = 0; i < x; i++){
    for(int j = 0; j < x - 1; j++){
        if(arr[j] > arr[j + 1]){
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        }
    }
   }
   for(int i = 0; i < x; i++){
    cout<<arr[i]<<" ";
   }
   cout<<'\n';
    return 0;
}
