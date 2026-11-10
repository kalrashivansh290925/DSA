#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printmat(vector<vector<int> > mat, int size){
    cout << "Your matrix is: " << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // cout<<"mat["<<i<<"]["<<j<<"] = ";
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void krotate(vector<vector<int> > mat, int k)
{
    int n = mat.size();
    int p = k%4;
    
    while(p)
    {
        // Transpose
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                swap(mat[j][i], mat[i][j]);
            }
        }

        // reversing the row
        for(int i=0; i<n; i++)
        {
            int start=0, end=n-1;
            while(start<end)
            {
                swap(mat[i][start], mat[i][end]);
                start++,end--;
            }
        }
        p--;
    }
    printmat(mat, n);

}

int main()
{
    int size, k;
    cout << "Enter the order of the matrix: ";
    cin>>size;

    vector<vector<int>> mat(size, vector<int>(size));
    cout << "Enter the values in your matrix: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "mat[" << i+1 << "][" << j+1 << "] = ";
            cin >> mat[i][j];
        }
    }

    printmat(mat, size);

    cout<<"Enter the number of times you want to ratate the matrix: ";
    cin>>k;

    krotate(mat, k);

}

// Rotating the matrix k times
