//Write a program to find out power of a number using recursion approach
#include<iostream>
#include<math.h>
using namespace std;

int find_power(int base,int power){
    //Base Case
    if(power == 0){
        return 1;
    }
    return base * find_power(base,power - 1);
}
int main(){
    int base,power;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the base : ";
    cin>>power;
    int ans = find_power(base,power);
    cout<<"Answer will be : "<<ans<<endl;
    return 0;
}