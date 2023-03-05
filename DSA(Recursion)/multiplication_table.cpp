//Write a c++ program to calculate multiplication table using recursive approach
#include<iostream>
using namespace std;

void multi_table(int num,int mul){
    //Base Case
    if(mul < 1){
        return;
    }
    multi_table(num,mul-1);
    cout<<num<<" * "<<mul<<" = "<<(num * mul)<<endl;
    return;
}
int main(){
    int num,mul;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the multiplication range : ";
    cin>>mul;
    cout<<"Multiplication : "<<endl;
    multi_table(num,mul);
    return 0;
}