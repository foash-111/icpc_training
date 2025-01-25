#include <iostream>
using namespace std;
int main(){
    int x, can_play_k_times, Years_of_participating = 0, num_of_members = 0;
    cin>>x>>can_play_k_times;

    while (x--)
    {
        cin>>Years_of_participating;
        if((5 - Years_of_participating) >= can_play_k_times) num_of_members++;
    }
    cout<< num_of_members / 3 << endl;

    return 0;
}
