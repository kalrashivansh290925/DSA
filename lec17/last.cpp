#include <iostream>
using namespace std;

int fun(int A[], int n){
    cout<<sizeof(A)<<endl; // gives 4, pointer!

    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
};

int main() {
    int arr[5] = {3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr, 5);
}


// Aage ka notebook me hai aur different platforms
