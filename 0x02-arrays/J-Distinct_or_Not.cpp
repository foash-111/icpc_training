#include<iostream>
#include <algorithm>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
    int x;
    long long arr[200000] = {0};
    int flag = 1;
    cin>>x;

   for(int i = 0; i < x; i++){
    cin>>arr[i];
   }
   sort(arr, arr + x);
    for(int j = 0; j < x - 1; j++){
        if(arr[j] == arr[j + 1]){
        flag = 0;
        break;
         }
    }

  if(flag) cout<<"YES"<<endl;
  else     cout<<"NO"<<endl;
    return 0;
}
