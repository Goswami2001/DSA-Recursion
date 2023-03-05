//Write a program to calculate factorial using recursion approach
#include<iostream>
using namespace std;
int factorial(int num){
    //Base Case
    if(num == 1){
        return 1;
    }
    return num*(factorial(num - 1));
}
int main(){
    int num;
    cout<<"Enter a number which factorial you want to know : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" will be : "<<factorial(num)<<endl;
    return 0;
}