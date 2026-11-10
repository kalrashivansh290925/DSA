#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,5};
    int i, total;
    int n=5, sum=0;

    total = (n*(n+1))/2;

    for(i=0; i<5; i++){
        sum+=arr[i];
    }

    int missing = total - sum;
    cout<< missing;
}
