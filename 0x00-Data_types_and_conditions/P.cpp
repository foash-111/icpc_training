#include<iostream>
#include<string>
using namespace std;

int main(){
   long long n;
   cin >> n;
   n % 2 == 0 ? cout << n + 2 << endl : cout<< n + 1 << endl;
    return 0;
}
