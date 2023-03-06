//Write a program in C++ to find the GCD of two numbers using recursion
#include<iostream>
using namespace std;
int find_gcd(int num1,int num2){
    //Base Case
    if(num2 > num1){
        return find_gcd(num2,num1);
    }
    if(num2 == 0){
        return num1;
    }
    return find_gcd(num2,num1 % num2);
}
int main(){
    int num1,num2;
    cout<<"Enter a  number : ";
    cin>>num1;
    cout<<"Enter a  number : ";
    cin>>num2;
    cout<<"GCD of "<<num1<<" and "<<num2<<" will be : "<<find_gcd(num1,num2)<<endl;
    return 0;
}