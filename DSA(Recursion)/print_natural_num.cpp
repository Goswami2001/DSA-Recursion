// Write a program in C++ to print the first 50 natural numbers using recursion.
#include<iostream>
using namespace std;

//Creating function
int natural(int num){
    //Base Case
    if(num <= 50){
       cout<<num<<" ";
       natural(num+1);
    }
}
int main(){
    int num;
    cout<<"Enter starting range of the number : ";
    cin>>num;
    cout<<"All natural numbers are in the given range : "<<endl;
    natural(num);
    return 0;
}