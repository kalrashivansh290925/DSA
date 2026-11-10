#include <iostream>
using namespace std;

// int searchTarget(int arr[], int target, int size)
// {
//     int mid, start=0, end=size-1, first=-1, last=-1;

//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
        
//         if(arr[mid]==target)
//         {
//             first=
//         }
//     }
// }

int main()
{
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

    cout<<endl;
    int target;
    cout<<"Which element to search? ";
    cin>>target;

    // cout<<searchTarget(arr, target, size);  // Requires two values to be returned, vector not learned yet.

    int mid, start=0, end=size-1, first=-1, last=-1;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        
        if(arr[mid]==target)
        {
            first=mid;
            end=mid-1;
        }

        else if(arr[mid]<target)
        start=mid+1;

        else 
        end=mid-1;
    }
    cout<<"first occurance: "<<first<<endl;

    start=0, end=size-1;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        
        if(arr[mid]==target)
        {
            last=mid;
            start=mid+1;
        }

        else if(arr[mid]<target)
        start=mid+1;

        else 
        end=mid-1;
    }
    cout<<"last occurance: "<<last<<endl;
  
    return 0;
} 
