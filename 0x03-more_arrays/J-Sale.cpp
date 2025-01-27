#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n_tvs, max_ablity;
    int arr[100] = {0};
    int temp[100] = {0};
    int counter = 0;
    long long sum = 0;

    cin>>n_tvs>>max_ablity;

    for(int i = 0; i < n_tvs; i++){
        cin>>arr[i];
        if(arr[i] < 0){
            temp[counter] = arr[i];
            counter++;
            sum += (-1 * arr[i]);
        }
    }

    if(counter <= max_ablity){
        cout<<sum<<endl;
    }
    else {
        sort(temp, temp + counter);
        sum = 0;
        for(int i = 0; i < max_ablity; i++){
            sum += (-1 * temp[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
