#include <iostream>
using namespace std;
// Optimized approach
// int minEatingSpeed(vector<int>& piles, int h) {
//         int start = 0, end = 0, ans, mid, n = piles.size();
//         long long sum = 0;

//         for (int i = 0; i < n; i++) {
//             // start+=piles[i]; this will show runtime error, integer overflow
//             sum += piles[i];
//             end = max(end, piles[i]);
//         }

//         start /= h;

//         if (!start)
//             start = 1;

//         while (start <= end) {
//             mid = start + (end - start) / 2;

//             long long hours = 0;

//             for (int i = 0; i < n; i++) {
//                 hours +=
//                     piles[i] / mid; // Gives runtime error, division by zero
//                 if (piles[i] % mid)
//                     hours++;
//             }

//             if (hours > h)
//                 start = mid + 1;

//             else {
//                 ans = mid;
//                 end = mid - 1;
//             }
//         }
//         return ans;
//     }

// Time complexity: O(nMlogM)
// Space complexity: O(1)

int minEatingSpeed(int arr[], int h, int n)
{
    int start = 1, end, max = 0, mid, ans;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    end = max;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int hours = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid < arr[i])
            {
                int temp = arr[i];

                while (temp > 0)
                {
                    temp -= mid;
                    hours++;
                }
            }

            else
                hours++;
        }

        if (hours > h)
            start = mid + 1;

        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[1000], size, h;
    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout <<endl<<"Enter the number of hours: ";
    cin >> h;

    cout << minEatingSpeed(arr, h, size);
}