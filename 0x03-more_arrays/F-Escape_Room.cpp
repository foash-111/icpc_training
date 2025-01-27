#include <iostream>
using namespace std;
int main(){
    int x;
    long long arr[20][20] = {0};
    cin>>x;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            if(i == 0 || j == 0) arr[i][j] = 1;
            else arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }
     for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
