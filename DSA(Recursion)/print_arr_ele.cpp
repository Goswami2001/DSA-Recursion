//Write a c++ program to print all array elements using recursive approach
#include<iostream>
using namespace std;

//Creating function
void print_arr(int arr[],int idx,int size){
    //Base Case
    if(idx == size){
        return;
    }
    cout<<arr[idx]<<"  ";
    print_arr(arr,idx + 1,size);
    return;
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
    cout<<"Sum of all array elemens will be : ";
    print_arr(arr,0,size);
    return 0;
}