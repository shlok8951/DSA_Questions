/*
Problem-> input a 2-D array with 0/1 element and convert the all row and col eleement by 0 in which any 0 exist
*/
#include<iostream>
#include <iostream>
using namespace std;

int main() 
{
    //---------------- Input part-----------
    int row, col;
    cout<<"Enter the size of row and column : ";
    cin>>row>>col;
    int arr[row][col];
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    ///----------Logic Part-----------

    //--------------------logic 1------------------
    
    int col_0 = 1;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            
            if(arr[i][j]==0){
                arr[i][0] = 0;
                if(j==0){
                    col_0 = 0; 
                }
                else{
                    arr[0][j] = 0;
                }  
            }
        }
    }
    for(int i =1;i<row;i++){
        for(int j =1;j<col;j++){
          if(arr[i][j]!=0){
            if(arr[i][0]==0 || arr[0][j]==0){
                arr[i][j]=0;
            }
          }
        }
    }
    if(col_0==0){
        for(int i =0;i<row;i++){
            arr[i][0]=0;
        }
    }
    if(arr[0][0]==0){
        for(int j =0;j<col;j++){
            arr[0][j]=0;
        }
    }


   //----------------- logic 2 -----------------




    // int row_ele[row]={0};
    // int col_ele[col]={0};
    // for(int i =0;i<row;i++){
    //     for(int j =0;j<col;j++){
    //         if(arr[i][j]==0){
    //             row_ele[i] = 1;
    //             col_ele[j]=1;
    //         }
    //     }
    // }

    // for(int i =0;i<row;i++){
    //     for(int j =0;j<col;j++){
    //         if(row_ele[i]==1 || col_ele[j]==1){
    //             arr[i][j]=0;
    //         }
    //     }
    // }


    //------------------Output Part---------------------
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;}
