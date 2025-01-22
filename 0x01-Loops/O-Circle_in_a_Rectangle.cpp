#include <iostream>
using namespace std;

int main(){
  int w, h, x, y, r;
  cin>> w>>h>>x>>y>>r;

  ((w - x) >= r) && ((h - y) >= r) && (x > 0 && y > 0) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
   
    return 0;
}
