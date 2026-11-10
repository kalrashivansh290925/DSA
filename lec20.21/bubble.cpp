#include <iostream>
using namespace std;

int main(){
    // int arr[5] = {7,5,6,1,3};
    char arr[5] = {'a', 'f', 'e', 'k', 'd'};
    int i, j;

    // ASCENDING 

    // for(i=3; i>=0; i--){  // NOTE that i is just an iteration variable which tells till which index steps are performed.
    //     bool swapped = 0;
    //     for(j=0; j<=i; j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //             swapped = 1;
    //         }
    //     }
    //     if(swapped==0)
    //         break;
    // }

    // DESCENDING

    // for(i=3; i>=0; i--){
    //     for(j=0; j<=i; j++){
    //         if(arr[j]<arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    // ASCENDING, SORTING PROCESS IN REVERSE ORDER

    for(i=0; i<4; i++){
        bool swapped=0;
        for(j=3; j>=i; j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped=0)
            break;
    }

    for(i=0; i<5; i++){
        cout<<arr[i]<<" "; 
    }
}