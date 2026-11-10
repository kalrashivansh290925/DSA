#include <iostream>
using namespace std;

int main() {
    // 2D ARRAY
    // // Array store karna hai jo address store karega 
    // int n, m;
    // cin>>n>>m;

    // int **ptr = new int*[n];

    // // Create 2D array
    // for(int i=0; i<n; i++)
    // {
    //     ptr[i] = new int [m];
    // }

    // // Enter the values 
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     {
    //         // cin>>ptr[i][j];
    //         cin>>*(*(ptr+i)+j);
    //     }
    // }

    // // Print
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     {
    //         cout<<ptr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // Release the memory 
    // for(int i=0; i<n; i++)
    // delete[] ptr[i];

    // delete[] ptr;
    




    // 3D ARRAY
    int L, B, H;
    cin>>L>>B>>H;
    int ***ptr = new int **[L];
    
    //Creation
    for(int i=0; i<L; i++)
    {
        ptr[i] = new int *[B];
        for(int j=0; j<B; j++)
        {
            ptr[i][j]=new int [H];
        }
    }

    //Insertion
    for(int i=0; i<L; i++)
    {
        for(int j=0; j<B; j++)
        {
            for(int k=0; k<H; k++)
            {
                cin>>ptr[i][j][k];
            }
        }
    }

    //Print
        for(int i=0; i<L; i++)
    {
        for(int j=0; j<B; j++)
        {
            for(int k=0; k<H; k++)
            {
                cout<<ptr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
        
    }

    // Deletion
    for(int i=0; i<L; i++)
    {
        for(int j=0; j<B; j++)
        {
            delete [] ptr[i][j];
        }
        delete[] *(ptr+i);
    }
    delete [] ptr;
    ptr = nullptr;
    
    return 0;
}