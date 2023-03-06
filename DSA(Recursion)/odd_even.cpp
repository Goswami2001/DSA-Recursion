//Write a program in C to print even or odd numbers in a given range using recursion
#include<iostream>
using namespace std;

//Creating function
void odd_calculate(int start,int num){
    //Base Case
    if(start > num){
        return;
    }
    //Recurrence Relation
    num % 2 == 1 ? odd_calculate(start,num - 2) : odd_calculate(start,num -1);
    //Printing odd numbers
    if(num % 2 == 1){
        cout<<num<<" ";
    }
}
//Creating function
void even_calculate(int start,int num){
    //Base Case
    if(start > num){
        return;
    }
    //Recurrence Relation
    num % 2 == 0 ? even_calculate(start,num - 2) : even_calculate(start,num -1);
    //Printing odd numbers
    if(num % 2 == 0){
        cout<<num<<" ";
    }
}
int main(){
    int start,end;
    cout<<"Enter the starting point : ";
    cin>>start;
    cout<<"Enter the starting point : ";
    cin>>end;
    cout<<"Odd numbers are : ";
    odd_calculate(start,end);
    cout<<endl;
    cout<<"Even numbers are : ";
    even_calculate(start,end);
    return 0;
}