#include <iostream>
#include <vector>
using namespace std;

int main() {

    // create vector, declare
    vector<int>v;
    // size and capacity 
    cout<<"Size of vector: "<<v.size()<<endl;
    cout<<"Capacity of vactor: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    cout<<"Size of v: "<<v.capacity()<<endl;
}