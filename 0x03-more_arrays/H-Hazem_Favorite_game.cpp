#include <iostream>
using namespace std;
int main(){
    int x;
    long long arr[200000];
    long long target;
    cin>>x;
    for(int i = 0; i < x; i++){
        cin>>arr[i];
    }
    cin>>target;

    for(int i = 0; i < x; i++){
        if(arr[i] == target){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
