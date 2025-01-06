#include<iostream>
#include<string>
using namespace std;

/**
 * We have a drink that has 
A
A kilocalories of energy per 
100
100 milliliters. How many kilocalories of energy does 
B
B milliliters of this drink have?
 */
int main(){
   float kilocalories; // per 100 milliliters
   float milliliters;  // so How many kilocalories here
   float result;
    cin>>kilocalories>>milliliters;
    // 45 -> 100
    // ? -> 200
    // ? = (200 * 45) / 100
    result = (kilocalories * milliliters) / 100;
    cout<<result<<endl;
    return 0;
}
