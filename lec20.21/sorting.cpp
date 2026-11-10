#include <iostream>
using namespace std;

int main() {
    int arr[1000], n, i, j;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Sorting the array in descending order

    for(i=0; i<n-1; i++){
        int index = i;

        for(j=i+1; j<n; j++) {
            if(arr[index]<arr[j])
            index=j;
        }
        swap(arr[index], arr[i]);
    }

    cout<<"The resultant array: "<<endl;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 
    return 0;
}
