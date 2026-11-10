#include <iostream>
using namespace std;


int main() {
    // char arr[10]; //Buffer overflow 
    // cin>>arr;
    // cout<<arr<<endl;
    // arr[5]='\0';
    // cout<<arr[4]<<endl;
    // cout<<arr;


    //Escape character
    string s="I am a \"good\" boy";
    cout<<s<<endl;

    //concatenation 
    string s1= "i am a "; 
    string s2= "bad boy.";

    string s3= s1+s2;
    cout<<s3<<endl;

    // cout<<s1.append(s2);

    //push_back and pop_back
    s3.push_back('S'); // to push a character into the existing string
    s3.pop_back(); // To pop the last character
    cout<<s3;


    // reverse the string using swap and finding the size by nomal traversal methods 
    // pallindrome

    return 0;
}