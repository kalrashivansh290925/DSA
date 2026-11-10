#include <iostream>
using namespace std;

// Initializing arrays

int main(){
// 1.
    int a[20] = {10,20,30};
    cout<<&a[0]<<a; // prints the address of the first element of the array, a equivalent to &a[0]
    for(int i=0; i<20; i++){
        cout<<a[i]<<endl;
    }
// 2.
    int name[]= {1,2,3,4};

// 3.
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

// 4.
    int b[5] = {0}; // Can be done only for 0 and not for any other number. 
    for(int i=0; i<20; i++){
        cout<<a[i]<<endl;
    }
}
