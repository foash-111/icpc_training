#include<iostream>
using namespace std;
int main(){
    int x, sum = 0, nuts = 0;
    cin>>x;

    while(x--){
        cin>>nuts;
        if(nuts > 10) sum += (nuts - 10);
    }
    cout<<sum<<endl;
    return 0;
}
