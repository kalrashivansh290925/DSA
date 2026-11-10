#include <iostream>
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
    return 0;
}