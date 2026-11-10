// Leetcode problem

#include <iostream>
using namespace std;

int main(){

    int num, sum=0, rem;
    cout<<"Enter the number: ";
    cin>>num;

    while (num>9){
        sum=0;
        while(num!=0){
            
            rem= num%10;
            num=num/10;
            sum+=rem;
            // cout<<sum; 
        }
        num=sum;
    }
    cout<<num;
    return 0;

}