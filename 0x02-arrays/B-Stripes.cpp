#include <iostream>
using namespace std;
int main(){
    int x, counter = 0;
    bool flag = 0;
    char arr[8][8];
    cin>>x;

    while(x--){
        flag = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin>>arr[i][j];
            }
        }

        for(int i = 0; i < 8; i++){
            counter = 0;
            for(int j = 0; j < 8; j++){
               if(arr[i][j] == 'R') counter++;
            }
            if (counter == 8){
            cout<<'R'<<endl;
            flag = 1;
            break;
            }
            if (flag) break;
        }
       if (flag) continue; 

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                counter = 0;
                if (arr[j][i] == 'B') 
                {
                    counter++;
                }
            }
            if (counter == 8){
            cout<<'B'<<endl;
            flag = 1;
            break;
            }
            if(flag) break;
        }
             

    }
    return 0;
}
