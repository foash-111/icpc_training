#include <iostream>
using namespace std;
int main(){
    int x;
    int size;
    int arr[100] = {0};
    int max_sum = 0;
    int temp = 0;
    cin>>x;
    while(x--){
        
        cin>>size;
        for(int i = 0; i < size; i++){
            cin>>arr[i];
            if(arr[i] == 0){
                max_sum++;
            }
            else {
                if(max_sum > temp) {
                    temp = max_sum;
                }
                max_sum = 0;
            }
        }
        max_sum > temp ?
        cout<<max_sum<<endl :
        cout<<temp<<endl;
        temp = max_sum = 0;
    }
    return 0;
}
