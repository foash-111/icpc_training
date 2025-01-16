#include <iostream>
using namespace std;

int main(){
    int x;
    int rate;
    string output;
    cin >> x ;
    while(x--){
        cin>>rate;

        output = (rate >= 1900) ? "Division 1" :
        (rate >= 1600 && rate <= 1899) ? "Division 2" :
        (rate >= 1400 && rate <= 1599) ? "Division 3" : "Division 4";

    cout<< output << endl;
    }
    return 0;
}
