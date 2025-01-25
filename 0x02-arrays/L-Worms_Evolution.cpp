#include <iostream>
using namespace std;

int main(){
    int size;
    int arr[100] = {0};
  
        cin>>size;
        for(int i = 0; i < size; i++){
            cin>>arr[i];
        }
        
        for(int n = 0; n < size; n++){
            if(arr[n] == 1) continue;
            for(int i = 1; i < size; i++){
                for(int j = 0; j< size; j++){
                    if(arr[n] == arr[j] + arr[i] && i != j){
                        cout<<n + 1<<" "<< i + 1<< " "<< j + 1<<endl;
                        return 0;
                    }
                }   
            }
        }
        cout<<-1<<endl;
        

    return 0;
}
