#include<iostream>
#include<string>
using namespace std;

int main(){
    int num_teams, cost_for_each, total_cost;
    cin>>num_teams>>cost_for_each;

    total_cost = num_teams * cost_for_each;
    cout<<total_cost<<endl;
  return 0;
}
