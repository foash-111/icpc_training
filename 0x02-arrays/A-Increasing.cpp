#include <iostream>
using namespace std;
int main(){
    int x,size, flag = 0;;
    long long arr[100] = {0};
    cin>>x;
    while(x--){
        cin>>size;
        for(int i = 0; i < size; i++){
            cin>>arr[i];
        }
        flag = 0;
        for(int k = 0; k < size - 1; k++){
            for(int j = k + 1; j < size; j++){
                if(arr[j] == arr[k])
                {
                    flag = 1;
                    break;
                }
            }
        }
        flag == 1 ? 
        cout<<"NO"<<endl : 
        cout<<"YES"<<endl;
    }
    return 0;
}
