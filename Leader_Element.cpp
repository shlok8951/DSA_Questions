/*
problem -> Find the leader Elements
Leader Elements => a element is called leader elemenet whan it's all right elments are smaller than it.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    //---------- Input part ----------
    int n ;
    cout<<"Enter the Size of array : ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //----------Logic part-----------
    int largest = INT_MIN;
    cout<<"Leader Elements are : ";
    for(int i = n-1;i>=0;i--){
        if(arr[i]>largest){
            largest = arr[i];
            cout<<largest<<endl;
        }
    }

    return 0;
}
