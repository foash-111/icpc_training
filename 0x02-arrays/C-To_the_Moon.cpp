#include <iostream>
using namespace std;
int main(){
    int x, ones = 0, zeros = 0;
    string str = "";
    cin>>x;
    cin>>str;
    for(int i = 0; i < x; i++){
        str[i] == '1' ?
        ones++ :
        zeros++;
    }
    ones > zeros ?
    cout<<"gogi_to_the_moon"<<endl :
    cout<<"kiddo"<<endl;
    return 0;
}
