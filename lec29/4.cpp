// Max difference bw two elements Approach 2

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[1000], size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Your array is: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    int ans=INT_MIN, dif=INT_MIN;

    for(int i=size-1; i>=0; i--)
    {
        ans=max(ans, arr[i]);
        
        if(i-1>=0)
        dif=max(ans-arr[i-1], dif);
        cout<<"ans: "<<ans<<", diff: "<<dif<< endl;
    }

    cout<<"Final values : "<<ans<<" "<<dif;
    return 0;
}