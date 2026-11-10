#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[4] = {4,3,7,2};

    // Bruteforce
    vector<int> subarray;
    for(int i=4; i>0; i--){
        for(int j=0; j<i; j++){
            subarray.push_back(arr[i]);
        }
    }

    for(auto i:subarray)
    cout<<i<<" ";
    return 0;
}