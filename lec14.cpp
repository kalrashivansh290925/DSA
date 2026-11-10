#include <iostream>
using namespace std;


// syntax functions

// int main(){

// }
/* return_type function_name(parameters){
    {
        code_part
    }
    return ans;
 }
*/

/* void function_name(){
    Note that if there is a complete code and you want it to end at some paricular step, write return; Since void it'll not take nay return values. No return; will run the complete code. 
}
for without return statement.


*/

// default_parameter 

int fact(int n=3){ // default_parameter
    int mul = n*2;
} 

// swap function
// pass by reference 
void swap(int &a, int &b){
    int f=a;
    a=b;
    b=f;
};
void swap(float &c, float &d){
    float g=d;
    d=c;
    c=g;;
};

int main(){
    int a=10, b=20;
    float c=1.2, d=2.12;
    swap(a,b);
    cout<<a<<endl;
    cout<<b;
    swap(c,d);
    cout<<c<<" "<<d;
}
