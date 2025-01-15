#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int x, num_of_buckets, num_of_squers;
    int max_sum = 0, temp = 0, max_multible = 0;
    cin>>x;
    while (x--)
    {
        cin>>num_of_buckets;
        for (int i = 0; i < num_of_buckets; i++)
        {
            cin>>num_of_squers;
            max_sum += num_of_squers;
        }
     (sqrt(max_sum) == int(sqrt(max_sum))) ?  cout<<"YES"<<endl : cout<<"NO"<<endl;
        max_sum = 0;
    }
}
