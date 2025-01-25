#include <iostream>
using namespace std;
int main(){
    int monster_power, raccoon_moves = 0, raccon_move_power = 0;
    cin>>monster_power>>raccoon_moves;

    while (raccoon_moves--)
    {
        cin>>raccon_move_power;
        monster_power -= raccon_move_power;
    }
    monster_power > 0 ?
    cout<<"No"<< endl :
    cout<<"Yes"<<endl;
    return 0;
}
