#include <iostream>
using namespace std;
int main(){
    int x;
    int a, b , c;
    long long sum_a = 0, sum_b = 0, sum_c = 0;

    cin>>x;
    while(x--){
        cin>>a>>b>>c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
    }
    if(sum_a == 0 && sum_b == 0 && sum_c == 0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
