#include <iostream>
#include <vector>

using namespace std;
int main()
{

    // int arr[5] = {1,2,3,4,5};
    // cout<<arr<<endl; // prints address of first element, since arr/arr[0] denotes the first element of the array
    // cout<<&arr<<endl; // address of first element or array.
    // cout<<&arr[2]<<endl;
    // cout<<*arr<<endl; // prints 1

    
    // string str="abcd";
    // cout<<&str<<endl; // prints address
    // cout<<str; // prints the string


    // char ary[5] = "abcd";

    // cout<<&ary[0]<<endl; // abcd
    // cout<<&ary<<endl; // prints address
    // cout<<ary<<endl; // prints the complete array and not the address, bcz implementation is such that it searches for the null character.
    // cout << (void *)ary << endl;
    
    // cout << ary[2] << endl;
    // cout << static_cast<const void*>(&ary[2]) << endl; // static_cast -> explicitly convert a value from one type to another when the conversion is allowed.
    // // Here, &ary[2] has type char*. Since cout treats a char* as text, the cast changes it to const void*, so cout prints the address

    // cout<<&ary[2]<<endl;
    

    int num = 1;
    cout<<num<<" "<<&num<<endl;
    int *ptr1 = &num;
    cout<<*ptr1<<" "<<ptr1<<endl;

 
    char name = 'f';
    cout<<name<<" "<<&name<<endl;
    char *ptr2 = &name;
    cout<<*ptr2<<" "<<ptr2<<endl;
    cout<<(void*)ptr2<<endl;
    }