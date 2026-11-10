#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool divide(vector<int> arr) // Pass by value
// bool divide(vector<int> &arr) // Pass by reference
{
    int maxi = INT_MIN, prefix=0, total_sum=0, n=arr.size();

    // Total Sum
    for(int i=0; i<n; i++)
    {
        total_sum+=arr[i];
    }

    for(int i=0; i<n; i++)
    {
        prefix += arr[i];
        int ans=total_sum-prefix;
        if(ans==prefix)
        return 1;
    }
    return 0;
}
int main() {
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0; i<n; i++)
    cin>>v[i];

    cout<<divide(v); 
    return 0;
}