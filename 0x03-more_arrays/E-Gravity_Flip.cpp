#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x;
    int arr[100] = {0};

    cin>>x;
   for(int i = 0; i < x; i++){
    cin>>arr[i];
   }
   sort(arr, arr + x);
   for(int i = 0; i < x; i++){
    cout<<arr[i]<< " ";
   }
   cout<<"\n";
    return 0;
}
