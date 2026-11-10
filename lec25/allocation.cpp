// To find the min number of pages allocated to the one with maximum number of book with the arr[i] number of pages for M=2 .

#include <iostream>
using namespace std;


int main() {
    int arr[4]={12, 34, 67, 90};
    int start=90; // the possibility that one person can get minimum number of pages, bcz the book with maximum number of pages will  be allocated to one of them.
    int end=12+34+67+90; // The maximum number of pages if all the books given toa single person.
    int mid, ans, M=2;

    while(start<=end)
    {
        mid=(start+end)/2;
        int page=0, count=1;

        for(int i=0; i<4; i++)
        {
            page+=arr[i];

            if(page>mid)
            {
                count++;
                page=arr[i];
            }
        }

        if(count<=M)
        {
            ans=mid;
            end=mid-1;
        }

        else
        start=mid+1;
    }

    cout<<ans;

    return 0;
}