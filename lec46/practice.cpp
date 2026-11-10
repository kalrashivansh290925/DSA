#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={2,4,6,8,9};
    int *ptr = &arr[4];
    for(int i=0; i<5; i++)
    {
        cout<<*ptr<<endl;
        ptr--;
    }    

    cout<<ptr-9;
    return 0;
}