#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    string str;
    cin>>x;
    while(x--){
        cin>>str;
        str[0] = tolower(str[0]);
        str[1] = tolower(str[1]);
        str[2] = tolower(str[2]);
        // i think we don't need another loop to convert each letter to lower case
        (str == "yes") ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}
