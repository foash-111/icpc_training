#include <iostream>
using namespace std;

int main(){
    int x, counter = 0; 
    cin>>x;
    long long num;
    while(x--){
        cin>>num;

        while(num != 1){
            if(num % 2 == 0){
                counter ++;
                num /= 2;
            }
            else if(((2 * num) % 3) == 0){
                num = ((2 * num) / 3);
                counter++;
            }
            else if(((4 * num) % 5)  == 0){
                num = ((4 * num) / 5);
                counter++;
            }
            else {
                counter = -1;
                break;
            }
        }
        cout<<counter<<endl;
        counter = 0;
    }
    return 0;
}
