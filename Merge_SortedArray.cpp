/*
Problem ->Given two Sorted array Merge them and astrting sort value in one array and remanning in second array.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //----------------------Input Part -------------------
    int n,m;
    cout<<"Enter the size of First Sorted Array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements : ";
    for(int i =0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of Second Sorted Array : ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the elements : ";
    for(int i =0;i<m;i++){
        cin>>arr2[i];
    }

    //-----------------------Logic Part -----------------

     int left = n-1;
     int right =0;
     while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
     }
     sort(arr1,arr1+n);
     sort(arr2,arr2+m);

//-------------------------------------------------------------------------------

    // int i =0;
    // int j =0;
    // while(i<n){
    //      j =0;
    //     if(arr1[i]<=arr2[j]){
    //         i++;
    //     }
    //     else{
    //         swap(arr1[i],arr2[j]);
    //         i++;
    //         while(j<m){
    //             if(arr2[j]>arr2[j+1]){
    //                 swap(arr2[j],arr2[j+1]);
    //                 j++;
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //     }
    // }
    // while(j<m){
    //             if(arr2[j]>arr2[j+1]){
    //                 swap(arr2[j],arr2[j+1]);
    //                 j++;
    //             }
    //             else{
    //                 break;
    //             }
    //         }


//-------------------------------------------------------------------
    // int arr3[n+m];
    // int i =0;
    // int j =0;
    // int k =0;
    // while(i<n && j<m){
    //     if(arr1[i]<=arr2[j]){
    //         arr3[k] = arr1[i];
    //         k++;
    //         i++;
    //     }
    //     else{
    //         arr3[k] = arr2[j];
    //         k++;
    //         j++;
    //     }
    // }
    // while(i<n){
    //      arr3[k] = arr1[i];
    //         k++;
    //         i++;
    // }
    // while(j<m){
    //      arr3[k] = arr2[j];
    //         k++;
    //         j++;
    // }

    // for(int i =0;i<m+n;i++){
    //     if(i>=n){
    //         arr2[i-n] = arr3[i];
    //     }
    //     else{
    //         arr1[i] =  arr3[i];
    //     }
    // }
    
    //----------------------output Part-------------------
    for(int x : arr1){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int y : arr2){
        cout<<y<<" ";
    }

}
  
