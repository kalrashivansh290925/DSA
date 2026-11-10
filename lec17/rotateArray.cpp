// Rotate array by one element.

#include <iostream>
using namespace std;

void rotate(int arr[], int n){ // Note that the "arr()" here is not array, it is a pointer.
    
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;

    int last = arr[n-1];

    for(int i=n-2; i>=  0; i--){
        arr[i+1] = arr[i];
    }
    arr[0]= last;

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

};

int main() {
    int arr[5] = {1,2,3,4,5};
    rotate(arr, 5); // we pass an array.
}