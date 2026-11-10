#include <iostream>
using namespace std;
// int main(){
//     int row, col, num;
    
//     cout<<"Enter the number of rows: ";
//     cin>>num;

//     for(row=1; row<=num; row++){
//         for(col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++){
//             cout<<to_string(col)<<" ";
//         }    
//         for(col=row-1; col>=1; col--){
//             cout<<to_string(col)<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int row, col, num;
    // cout<<"Enter the number of rows: ";
    // cin>>num;

//     for(row=1; row<=num; row++){
        
//         for(col=1; col<=row-1; col++){
//             cout<<"  ";
//         }
        
//         for(col=2*(num-row)-1; col>=1; col--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int row, col, num;
//     cout<<"Enter the number of rows: ";
//     cin>>num;

//     for(row=num; row>=1; row--){
//         for(col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         for(col=1; col<=2*(num-row); col++){
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(row=1; row<=num; row++){
//         for(col=row; col>=1; col--){
//             cout<<"* ";
//         }
//         for(col=1; col<=2*(num-row); col++){
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// int main(){
//     int row, col, num;
//     cout<<"Enter the number of rows: ";
//     cin>>num;

//     for(row=1; row<=num; row++){
//         for(col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         for(col=1; col<=2*(num-row); col++){
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     for(row=1; row<=num-1; row++){
//         for(col=1; col<=num-row; col++){
//             cout<<"* ";
//         }
//         for(col=1; col<=2*row; col++){
//             cout<<"  ";
//         }
//         for(col=1; col<=num-row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

int main(){
    int row, col, num;
    cout<<"Enter the number of rows: ";
    cin>>num;

    for(row=1; row<=num; row++){
        for(col=1; col<=num-row; col++){
            cout<<" ";
        }
        for(col=1; col<=row; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(row=1; row<=num; row++){
        for(col=1; col<=row-1; col++){
            cout<<" ";
        }
        for(col=1; col<=num-row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
