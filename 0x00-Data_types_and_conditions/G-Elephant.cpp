#include<iostream>
#include<string>
using namespace std;

int main(){
   int max_positions = 5;
   int distance;
   int min_num_of_steps;
   cin >> distance;
   
   if(distance % max_positions == 0) {
    cout<< distance / max_positions<<endl;
   }
    else
    {
        cout<<(distance / max_positions) + 1<<endl;
    }
    return 0;
}
