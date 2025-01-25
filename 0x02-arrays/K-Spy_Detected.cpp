#include <iostream>
using namespace std;

int main(){
    int x, size;
    int arr[100] = {0};
    cin>>x;
    while(x--){
        cin>>size;
        for(int i = 0; i < size; i++){
            cin>>arr[i];
        }
        
        for(int i = 0; i < size; i++){
            if(i == 0){
                if(arr[i] != arr[i + 1]  
                && arr[i + 1] == arr[i + 2]) 
            {
                cout<<1<<endl;
                break;
            }
            }
            else
            {
            if(arr[i] != arr[i - 1]) 
            {
                cout<<i + 1<<endl;
                break;
            }
            }
        }

    }
    return 0;
}
