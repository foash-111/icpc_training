#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
   int x, y, z;
   cin>>x>>y>>z;

cout<< min(min(x, y), z) << " " << max(max(x, y), z) <<endl;
    return 0;
}
