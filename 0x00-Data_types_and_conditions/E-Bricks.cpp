#include<iostream>
#include<string>
using namespace std;

int main(){
   int max_load_capacity;
   int weight_of_each;
   int max_num_of_bricks;

   cin>>max_load_capacity>>weight_of_each;

   max_num_of_bricks = max_load_capacity / weight_of_each;
   cout<<max_num_of_bricks<<endl; 


    return 0;
}
