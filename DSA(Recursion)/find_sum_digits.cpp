//Write a c++ program to find out the sum of digits using recursionapproach
#include<iostream>
using namespace std;
int find_out(int num){
    //Base Case
    if(num == 0){
        return 0;
    }
    return (num % 10) + find_out(num / 10);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int ans = find_out(num);
    cout<<"Sum of the "<<num<<" will be : "<<ans<<endl;
    return 0;
}