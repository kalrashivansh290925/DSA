#include <iostream>
using namespace std;

//////// while loop 
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int i=1;

//     while(i<=10){
//         cout<<i*n<<endl;
//         i++;
//     }
// }


//////// do-while loop 
// int main(){
//     int i=1;
//     int sum=0;

//     do{
//         cout<<i<<" ";
//         i++;
//         sum+=i;
//     }
//     while(i<=10);
//     cout<<endl;
//     cout<<"Sum is: "<<sum<<endl;
//     return 0;
// }


//////// break, continue 

//////// switch
// int main(){
//     int i;
//     cout<<"Enter the number: ";
//     cin>>i;

//     switch (i){
//         case 1:
//         cout<<"Mohit";
//         break;
        
//         case 2:
//         cout<<"Rohit";
//         break;

//         default:
//         cout<<"asdf";
//     }

// }


//////// Scope of a variable 
int main(){
    int n=10;
    if(true){
        int n=20;
        cout<<n<<endl; //It'll first check in the locally for "n" and the parent scope;
    }
    int i = 20;

    for(; i<=30; i++){
        cout<<i<<endl;
    }
}