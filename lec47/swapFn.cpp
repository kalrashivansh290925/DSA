#include <iostream>
#include <vector>
using namespace std;

void passVal(int p1, int p2)
{
    int temp=p1;
    p1=p2;
    p2=temp;
}

void passPtr(int *p1, int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void passRef(int &p1, int &p2)
{
    int temp=p1;
    p1=p2;
    p2=temp;
}

void pass(vector<int>&temp)
{
    for(int i=0; i<5; i++)
    temp[i] = 20;
}

void doubl(int *p)
{
    for(int i=0; i<5; i++)
    p[i]=p[i]*2;
}

int main() {
    int first = 10, second = 20;

    // // Reference variable
    // int num=50;
    // int &temp = num;
    // cout<<temp<<endl;
    // temp++;
    // cout<<num<<" "<<temp<<endl;
    // cout<<&num<<" "<<&temp<<endl;

    vector<int>v(5,0);
    pass(v);
    for(int i=0; i<5; i++)
    cout<<v[i]<<endl;
    
    int arr[5] = {1,2,3,4,5};
    doubl(arr);
    for(int i=0; i<5; i++)
    cout<<arr[i]<<endl;

    passVal(first, second);
    cout<<first<<" "<<second<<endl;

    passPtr(&first, &second);
    cout<<first<<" "<<second<<endl;

    passRef(first, second);
    cout<<first<<" "<<second<<endl;

    return 0;
}

// Vector, string -> solve by reference variable 
// array, char arr -> pointer ki help se 