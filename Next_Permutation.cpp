/*
Problem -> Find the next Permutaion of the given array.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //----------------- Input part--------------
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //--------------Logical part-----------------
    int bp;
    for(int i =n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            bp = i;
            break;
        }
    }
    for(int i = n-1;i>bp;i--){
        if(arr[i]>arr[bp]){
            swap(arr[i],arr[bp]);
            break;
        }
    }
    reverse(arr+bp+1,arr+n);

    //---------------  Output part -------------
    for(int c : arr){
        cout<<c<<" ";
    }
    return 0;
}
