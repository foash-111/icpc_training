#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
   int x, y, z, mn, mid, mx;
   cin>>x>>y>>z;

    mn = min(min(x,y), z);
    mx = max(max(x,y), z);
    mid = (x + y + z) - (mn + mx);

    cout<<mn<<endl<<mid<<endl<<mx<<endl<<endl;
    cout<<x<<endl<<y<<endl<<z<<endl;
    return 0;
}
