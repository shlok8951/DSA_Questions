/*
Problem -> Travers the whole matrixt in Spiral way 
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

    int top = 0;
    int bottom = row-1;
    int left =0;
    int right = col-1;

    while(top<=bottom && left<=right){
        for(int i =left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i =top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i =right;i>=left;i--){
               cout<<arr[bottom][i]<<" ";
            }
        }
        bottom--;
        if(left<=right){
            for(int i = bottom;i>=top;i--){
              cout<<arr[i][left]<<" ";
            }
        }
        left++;
    }

    return 0;
}
