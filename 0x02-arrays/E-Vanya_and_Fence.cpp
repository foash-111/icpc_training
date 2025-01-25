#include <iostream>
using namespace std;
int main(){
    int x, wall_height = 0, person_height = 0, width = 0;
    cin>>x>>wall_height;

    while (x--)
    {
        cin>>person_height;
        if((person_height) > wall_height) width += 2;
        else width+= 1;
    }
    cout<< width << endl;

    return 0;
}
