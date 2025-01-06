#include<iostream>
using namespace std;
int main() {
    int age_in_days;
    int yaers, months;
    cin >> age_in_days;

    yaers = age_in_days / 365;
    age_in_days -= (yaers * 365);
    months = age_in_days / 30;
    age_in_days -= (months * 30);

    cout<<yaers<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<age_in_days<<" days"<<endl;
     
    return 0;
}
