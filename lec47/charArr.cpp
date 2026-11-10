#include <iostream>
using namespace std;

int main() {
    // char arr[5] = "1234";
    // char *ptr = arr;
    // cout<<arr<<endl;
    // cout<<ptr<<endl;   
    // cout<<(void*)ptr<<endl;

    char name = 'a';
    char *ptr2 = &name;
    cout<<name<<endl;
    cout<<ptr2<<endl;
    cout<<(void*)ptr2<<endl;

    char frame = 'z';
    char ptr3 = frame;
    cout<<ptr3;
    return 0;
}