#include <iostream>
#include <string>

using namespace std;

int main(){
  int x;
  cin>>x;
  while (x--)
  {

    int a1, a2, b1, b2;
    int suneet_counter = 0;
    // int slavic_counter = 0;
    cin>>a1>>a2>>b1>>b2;

    if((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2)){
      suneet_counter += 2;
    }
    if((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1)){
      suneet_counter += 2;
    }

cout<<suneet_counter<<endl;


  }
  
    return 0;
}
