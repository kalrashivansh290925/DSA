#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int>& nums) {
        int start=0, end=nums.size()-1, mid, ans=nums[0];

        while(start<=end)
        {
            mid=start+(end-start)/2;

            // Left side sorted
            if(nums[mid]>nums[end])
            {
                start = mid+1;
            }

            // Right side sorted
            else
            {
                ans=nums[mid];
                end=mid-1;
            }
        }
        return ans;
    }

int main() {
    vector<int> nums(7);
    nums={1,3,5};
    cout<<findMin(nums);
    return 0;
}