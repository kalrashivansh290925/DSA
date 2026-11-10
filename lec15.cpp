#include <iostream>
#include <math.h>
using namespace std;


// // Convert small letters to capital letters.


// char convert(char name){
//     char ans = name - 'a' + 'A';
//     cout<<name;
//     return ans;
// }

// int main(){
//     char name;
//     cin>>name;

//     cout<<convert(name)<<endl;

//     return 0;
// }


// // Armstrong 


// int countDigit(int n); // to write a function after the main function, we must declare the funtion before the function main such that the compiler could know that the funtion exists.

// bool armstrong(int num, int digit){
//     int n = num;
//     int rem, ans=0;
//     while(n){
//         rem=n%10;
//         n/=10;
//         ans = ans + pow(rem,digit);
//     }

//     if(ans==num){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int main(){
//     int num;
//     cin>>num;
//     int digit = countDigit(num);
//     cout<<digit<<endl;
//     cout<<armstrong(num, digit);

// }

// int countDigit(int n){
//     int count=0;
//     while(n){
//         n /= 10;
//         count++;
//     }
//     return count;
// }


// // Trailing zeroes
// // Find the number of trailing zeroes in the factorial of a number.

// int trailingZeroes(int n) {
//     int count = 0;

//     while(n>=5){
//         count += n/5;
//         n/=5;
//     }

//     return count;
// }

// int factorial(int num){
//     int prod=1;
//     for(int i=1; i<=num; i++){
//         prod = prod*i;
//     }
//     cout<<"The factorial of "<<num<<" is "<<prod<<endl;
// }

// int main(){
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     factorial(num);
//     cout<<"The number of trailing zeroes is "<<trailingZeroes(num)<<endl;
// }



// // Total moves for bishop:
// int moves(int A, int B){
//     int count = 0;
//     count+=min(8-A,8-B);
//     count+=min(8-A,B-1);
//     count+=min(A-1,8-B);
//     count+=min(A-1,B-1);
//     return count;
// }

// int main(){
//     int A, B;
//     cout<<"Enter the position of the bishop.";
//     cin>>A>>B;
//     cout<<moves(A,B)<<endl;
// }


// Nim game 
int canWinNim(int n){
    if(n%4==0)
    return 0;
    else
    return 1;
}

// Concept not clear 