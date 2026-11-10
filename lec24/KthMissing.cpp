 #include <iostream>
 using namespace std;

 int missing(int arr[], int size, int k)
 {
    int start = 0, end=size-1, mid, ans=0;
    
    while(start<=end){
        
        mid = start+(end-start)/2;

        if(arr[mid]-mid-1>=k)
        {
            ans= mid;
            end=mid-1;
        }

        else
            start=mid+1;

    }

    return ans+k;
 }
 
 int main() {
    int arr[1000], size, k;
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

    cout<<"\nEnter k for kth missing element: ";
    cin>>k;
    cout<<missing(arr, size, k);
    return 0;
 }