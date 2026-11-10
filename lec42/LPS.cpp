// // Longest Prefix Suffix
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s="ABCDEFABCD";
    string s1, s2, s3;
    int i=0, j=s.size()-1, len=0;
    while(i<j)
    {
        s1+=s[i];
        s2=s[j]+s2;
        for(int k=0; k<s1.size(); k++)
        {
            if(s1[k]==s2[k])
            {
                len=max(len, k+1);
            }
            else
            break;
        }
        // cout<<len<<endl;
        i++, j--;
    } 
    cout<<len;
    return 0;
}


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s = "ABCDEFABCD";
//     string s1, s2;
//     int i = 0, j = s.size() - 1, len = 0;

//     while(i < j)
//     {
//         s1 += s[i];
//         s2 = s[j]+s2;

//         for(int k = 0; k < s1.size(); k++)
//         {
//             if(s1[k] == s2[k])
//                 len = max(len, k + 1);
//             else
//                 break;
//         }

//         i++;
//         j--;
//     }

//     cout << len;

//     return 0;
// }