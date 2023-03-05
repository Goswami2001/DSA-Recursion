//Write a c++ program to find out sum of all array elements using recursion approach
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Creating the function
int sum_arr(int *arr,int idx,int size){
    //Base Case
    if(idx == (size - 1)){
        return arr[idx];
    }
    //Assumption & self_work
    return (arr[idx] + sum_arr(arr,idx + 1,size));
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    //Taking array's  input element
    for(int i = 0;i < size;i++){
        cout<<"Enter array elements : ";
        cin>>arr[i];
    }
    //Printing array
    cout<<"Printing the array elements : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    //Printing result with function call
    cout<<"Sum of all array elemens will be : "<<sum_arr(arr,0,size)<<endl;
    return 0;
}