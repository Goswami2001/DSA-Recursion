//Write a program in C++ to calculate the multiplication of numbers from 1 to n using recursion
#include<iostream>
using namespace std;

int multiplication(int num){
    //Base Case
    if(num == 1){
        return 1;
    }
    //Assumption & Self-work
    return num * multiplication(num -1);
}
int main(){
    int num;
    cout<<"Enter maximum element : ";
    cin>>num;
    cout<<"multiplication of natural number from 1 to maximum range will be : "<<multiplication(num)<<endl;
    return 0;
}