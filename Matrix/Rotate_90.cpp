/*
  Problem -> Rotate a given matrix at 90 degree.
 */
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
    //---------------- Input part-----------
    int row, col;
    cout<<"Enter the size of row and column : ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the input Elemements : ";
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    ///----------Logic Part-----------

    for(int i =0;i<row;i++){
        for(int j =i+1;j<col;j++){
           swap(arr[i][j] ,arr[j][i]);
        }
    }
    for(int i =0;i<row;i++){
        reverse(arr[i],arr[i]+col);
    }

   
    //------------------Output Part---------------------
    cout<<"Out put matrix is : ";
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
