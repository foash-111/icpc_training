#include <iostream>
using namespace std;

int main(){
    int weight = 0;
    cin>> weight;

    (weight > 3 && weight % 2 == 0 )? cout << "YES"<<endl : cout<<"NO"<<endl; 
    return 0;
}
