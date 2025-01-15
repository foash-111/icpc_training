#include <iostream>
using namespace std;

int main() {
    int x, num, counter = 0, temp = 0, multiplier = 1;
    cin>>x;
    while(x--){
        cin>>num;
       temp = num;

        counter = 0;
       while(num > 0) {
        if(num % 10 != 0) counter++;
        num /= 10;
       }
       cout<<counter<<endl;
       counter = 0;

        while(temp > 0){
            if (temp % 10 != 0) {
            cout<<(temp % 10) * multiplier<<" ";
            }
            temp /= 10;
            multiplier *= 10;
        }
        cout<<endl;
        multiplier = 1;

    }
    return 0;
}
