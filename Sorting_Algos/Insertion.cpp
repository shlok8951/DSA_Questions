/*
Problem -> Given a array Sort using the Insertion Sort.
 */
/*
  Time complexity : Best -> O(n)
                    Average->O(n^2)
                    Worst ->O(n^2)
  Space Complexity : O(1)
  */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //--------------Input part-----------------------
    int n;
    cout<<"Enter the size of aaray :";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    //---------------Logic Part------------------
    for(int i =1;i<n;i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
    //-----------------Output part--------------

    for(int x : arr){
        cout<<x<<" ";
    }
} 
