#include <iostream>
#include <string>

using namespace std;

int main(){
    int i = 0, j = 6;
    char c;
    int first_3_total = 0;
    int second_3_total = 0;
    cin >> i;
    while(i--){
            j = 6;
            while(j--){
                cin>>c;
                j >= 3 ? first_3_total += c : second_3_total += c;
            }
    
        first_3_total == second_3_total ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        first_3_total = 0;
        second_3_total = 0;

    }

    
    return 0;
}
