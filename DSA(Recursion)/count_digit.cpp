//Write a program in C++ to count the digits of a given number using recursion
#include<iostream>
using namespace std;

//Creating function
int count(int num){
    //Base Case
    if(num/10 == 0){
        return 1;
    }
    //Self-Work & Assumption
    return 1 + count(num/10);  
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Total number of digit in "<<num<<" is : "<<count(num)<<endl;
    return 0;
}