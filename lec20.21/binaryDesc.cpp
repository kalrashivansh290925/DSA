#include <iostream>
using namespace std;

int printArray(int arr[], int num)
{
    for(int i=0; i<num; i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

int searchElem(int arr[], int num, int key)
{
    int start=0, end=num-1;

    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]==key)
        return mid;

        else if(arr[mid]<key)
        end=mid-1;

        else
        start=mid+1;
    }

    return -1;
}

int main() {
    int arr[1000], i, num;
    cout<<"Enter the number of elements: ";
    cin>>num;

    cout<<"Enter the elements in array: "<<endl;
    for(i=0; i<num; i++){
        cin>>arr[i];
    }

    cout<<"Your array is: "<<endl;
    printArray(arr, num);

    int key;
    cout<<"Which element to search for? ";
    cin>>key;

    // sortDesc(arr, num);

    cout<<searchElem(arr, num, key);
    return 0;
}