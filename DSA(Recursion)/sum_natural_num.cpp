//Write a program in C++ to calculate the sum of numbers from 1 to n using recursion
#include<iostream>
using namespace std;
int sum(int num){
    //Base Case
    if(num < 1){
        return 0;
    }
    //Self-Work & Assumption
    return num + sum(num - 1);
}
int main(){
    int num;
    cout<<"Enter the maximum range : ";
    cin>>num;
    cout<<"Sum of numbers from 1 to maximum range will be : "<<sum(num)<<endl;
    return 0;
}