#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={6,4,5,-3,2,8};
    int n=arr.size();
    vector<int> suffix(n);

    // cout<<n;
    suffix[n-1]=arr[n-1];
    
    // cout<<suffix[n-1];
    for(int i=n-2; i>=0; i--)
    {
        suffix[i]=suffix[i+1]+arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<suffix[i]<<" ";
    }

    for(auto i:suffix)
    cout<<i<<" ";

    return 0;
}