#include <iostream>
using namespace std;

int probableIdx(int arr[], int size, int target)
{
    int start=0, end=size-1, ans = size, mid;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            return ans;
        }

        else if(arr[mid]<target)
        {
            start=mid+1;
        }

        else
        {
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}

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

    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    cout<<probableIdx(arr, size, target);
    return 0;
}