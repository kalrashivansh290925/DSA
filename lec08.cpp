#include <iostream>
using namespace std;
int  main(){

    // int n;
    // cout<< "Input the number:";
    // cin>>n;
    // // for(char row='A'; row<='E'; row++){
    //     for(char col=1; col<='E'-row; col++){
    //         cout<<"  ";
    //     }

    //     for(char col='A'; col<=row; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int row=1; row<=n; row++){
    //     for(int col=1; col<=n-row; col++){
    //         cout<<"  ";
    //     }
    //     for(char col='A'; col<='A'+row-1; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    int row, col;
    for(row=1; row<=5; row++){
        for(col=1; col<=5-row; col++){
            cout<<"  ";
        }
        for(col=row; col>=1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }


    return 0;
}

// Note that when we are printing dtype char, we use 'A'.