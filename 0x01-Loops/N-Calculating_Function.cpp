#include <iostream>
using namespace std;

int main(){
  long long x, total_sum = 0, odd_sum = 0, even_sum = 0;
  cin>>x;
  // for(int i = 1; i <= x; i++) {
  //   i % 2 == 0 ? sum += i : sum -= i;
  // } cause time limit exceed
  x % 2 == 0 ? 
  // x = 10
  // 2 + 4 + 6 + 8 + 10 = 30
  // 1 + 3 + 5 + 7 + 9 = 25
  even_sum = ((x + 2 ) / 2) * (x / 2), // 6 * 5 = 30
  odd_sum = (x / 2) * (x / 2) : // 5 * 5 = 25

  // x = 9
  // 2 + 4 + 6 + 8 = 20
  // 1 + 3 + 5 + 7 + 9 = 25
  even_sum = ((x + 1) / 2) * (x / 2), // 5 * 4 = 20
  odd_sum = ((x + 1) / 2) * ((x + 1) / 2);

  total_sum = even_sum - odd_sum;
  cout<<total_sum<<endl;
    return 0;
}
