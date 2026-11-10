#include <iostream>
#include <vector>
using namespace std;

int searchElem(vector<vector<int>> matrix, int target, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        if(target<=matrix[i][0] && target>=+matrix[i][col-1])
        {
            int start = 0, end = col-1;

            while(start<=end)
            {
                int mid=(start+end)/2;

                if(matrix[i][mid]==target)
                return true;

                else if(matrix[i][mid]<target)
                end=mid-1;

                else
                start=mid+1;
            }

        }
        return false;
    }
}

int main() 
{
    int row, col, target;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;

    vector<vector<int>> matrix(row, vector<int>(col) );

    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"Enter the target element: ";
    cin>>target;

    int answer = searchElem(matrix, target, row, col);
    cout<<answer;
    return 0;
}