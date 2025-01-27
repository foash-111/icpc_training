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
        min = abs(arr[0] - arr[1]);
        max = abs(arr[0] - arr[1]);
            for(int i = 1; i < x - 1; i++){
               if(abs(arr[i] - arr[i + 1]) < min) {
                min = abs(arr[i] - arr[i + 1]);
               }
               if(abs(arr[i] - arr[i + 1]) > max) {
                max = abs(arr[i] - arr[i + 1]);
               }
               
            }
            cout<<max<<" "<<min<<endl;
    }
     
    
    return 0;
}
