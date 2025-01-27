#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x;
    int size;
    long long arr[100];

    cin>>x;
    while(x--){
        cin>>size;
        for(int i = 0; i < size; i++){
            cin>>arr[i];
        }
        sort(arr, arr + size);
    cout<<(-1 * arr[0]) + arr[size - 1]<<endl;
    }
    return 0;
}
