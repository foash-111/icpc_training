#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int x;
    int size;
    int arr[200] = {0};
    int flag = 0;

    cin>>x;
    while(x--){
        cin>>size;
        for(int i = 0; i < size; i++){
            cin>>arr[i];
        }
        sort(arr, arr + size);
        // for(int i = 0; i < size; i++){
        //     cout<<arr[i]<<" ";
        // }
        //         cout<<"\n";
        for(int i = 0; i < size - 1; i++){
            if(arr[i] == arr[i + 1]){
                flag++;
                i ++;
            }
        }

        if(flag >= 2){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        flag = 0;
    }
    return 0;
}
