//Write a program to find out fibonacci series uding recursion approach
#include<iostream>
using namespace std;
void fibo(int num){
    static int num1 = 0,num2 = 1,num3;
    //Base Case
    if(num > 0){
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout<<num3<<" ";
        fibo(num - 1);
    }
    return;
}
int main(){
    int num;
    cout<<"Enter total number of element in fibonacci series : ";
    cin>>num;
    cout<<"Fibonacci series : "<<" 0 "<<"1 ";
    fibo(num);
    return 0;
}