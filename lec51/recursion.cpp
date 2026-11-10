#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>nums={1,0,2,3,0,4};
    int i=nums.size(); 
        while(i>=0)
        {
            if(nums[i]==0)
            {
                int j=i;
                while(j<nums.size()-1)
                {
                    swap(nums[j], nums[j+1]);
                }
            }
            i--;
        }
    for(int i=0; i<nums.size(); i++)
    cout<<nums[i]<<endl;
    
    return 0;
}