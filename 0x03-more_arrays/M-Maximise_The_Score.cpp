#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int x;
    int size;
    long long arr[100], sum = 0;


    cin>>x;
    while(x--){
        cin>>size;

        for(int i = 0; i < size * 2; i++){
            cin>>arr[i];
        }

        sort(arr, arr + (2 *size));

        for(int i = 0; i < (size * 2); i += 2){
        sum += min(arr[i], arr[i + 1]);
        }
      cout<<sum<<endl;
      sum = 0;
    }

    return 0;
}
