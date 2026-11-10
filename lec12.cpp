// Binary to decimal and other conversions;

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int rem, ans=0, mul=1, sol=0;
    // Binary to Octal 
    while(num>0){
        //remainder
        rem=num%10;
        //quotient
        num=num/10;
        //ans
        ans=rem*mul+ans;
        //mul
        mul=mul*2;
    }

    cout<<ans<<endl;
    mul=1;
    while(ans>0){
        //remainder
        rem=ans%8;
        //quotient
        ans=ans/8;
        //ans
        sol=rem*mul+sol;
        //mul
        mul=mul*10;
    }

    cout<<sol<<endl;
}  