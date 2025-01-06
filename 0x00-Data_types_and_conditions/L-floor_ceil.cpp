#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
   float a, b;
    cin>>a>>b;
    cout<<"floor "<< a << " / " << b << " = " << int(a / b) <<endl;
    cout << "ceil " << a << " / " << b << " = " << ((int(a) % int(b)) == 0 ? int(a / b) : int(a / b) + 1) << endl;

    cout<<"round "<<a<<" / "<<b<<" = "<<round(a / b)<<endl;

    return 0;
}
