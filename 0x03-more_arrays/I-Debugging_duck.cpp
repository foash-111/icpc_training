#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x;
    long long arr[20] = {0}, min = 0, max = 0;
    cin>>x;
    for(int i = 0; i < x; i++){
       cin>>arr[i];
    }
    if(x == 1) cout<<arr[0]<<" "<<arr[0]<<endl;
    else {
        min = arr[0];
        max = arr[0];
            for(int i = 1; i < x - 1; i++){
               if(arr[i] < min) {
                min = arr[i];
               }
               if(arr[i] > max) {
                max =arr[i];
               }
               
            }
            cout<<max<<" "<<min<<endl;
    }
     
    
    return 0;
}
