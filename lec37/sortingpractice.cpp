#include <iostream>
using namespace std;

int main()
{
    string s = "eabcabd";
    int n = s.length();

    // selection sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int minidx = i;

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (s[minidx] > s[j])
    //             minidx = j;
    //     }

    //     swap(s[minidx], s[i]);
    // }

    // bubble sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {

    //         if (s[j] > s[j + 1])
    //             swap(s[j], s[j + 1]);
    //     }
    // }

    // insertion sort 
    for(int i=1; i<n; i++){
        int key=s[i];
        int j;

        for(j=i-1; j>=0 && s[j]>key; j--)
            s[j+1]=s[j];

        s[j+1]=key;
    }

    for (int i = 0; i < n; i++)
        cout << s[i];
    return 0;
}