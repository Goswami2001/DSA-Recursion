//Write a c++ program to find out whether it's increasing form 1 to n
#include<iostream>
using namespace std;

//Creating function
void increasing(int num){
    //Base Case
    if( num < 1){
        return;
    }
    increasing(num - 1);
    cout<<num<<"  ";
}
int main(){
    int num;
    cout<<"Enter the maximum number : ";
    cin>>num;
    cout<<"Increasing sequence : ";
    increasing(num);
    return 0;
}