#include<iostream>
using namespace std;

int main(){
    int film_time, not_interesting, total_time;
    cin>>film_time>>not_interesting;
    total_time = film_time - (not_interesting / 2);
    cout<< total_time <<endl;
    return 0;
}
