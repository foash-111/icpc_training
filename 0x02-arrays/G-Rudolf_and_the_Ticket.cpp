#include <iostream>
using namespace std;
int main() {
    int x, sum = 0;;
    int l[1000] = {0}, r[1000] = {0}, k;
    int y, z;
    cin>>x;
    while(x--){
        cin>>y>>z>>k;
        for(int i = 0; i < y; i++){
            cin>>l[i];
        }
        for(int i = 0; i < z; i++){
            cin>>r[i];
        }

        for(int i = 0; i < y; i++){
            for(int j = 0; j < z; j++){
                if(l[i] + r[j] <= k) sum++;
            }
        }

    cout<<sum<<endl;
    sum = 0;
    }
    return 0;
}
