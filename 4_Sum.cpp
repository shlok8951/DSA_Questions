/*
Problem -> Given a array of integer find the all unique sub sequence of 4 digits there sum is equal to the target.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //------------------Input Part--------------------
    int n ;
    cout<<"Enter the size of Array for 4 sum: ";
    cin>>n;
    int arr[n];
    cout<<"ENter the values : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target sum : ";
    cin>>target;
  

    //----------------Logic Part----------------

    //----------------appoarc of Two Pointer-----------------
      set<vector<int>> st;
      sort(arr,arr+n);
      for(int i =0;i<n-3;i++){
        if(i!=0 && arr[i]==arr[i-1])continue;
        if(arr[i]+arr[i+1]+arr[i+2]+arr[i+3]>target)break;
        if(arr[i]+arr[n-1]+arr[n-2]+arr[n-3]<target)continue;
        for(int j = i+1;j<n-2;j++){
            if(j!=i+1 && arr[j]==arr[j-1])continue;
            int k = j+1;
            int l = n-1;
            while(k<l){
            int sum = arr[i]+arr[j]+arr[k]+arr[l];
            if(sum==target){
                vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
                st.insert(temp);
                l--;
                k++;
                while(arr[k]==arr[k-1])k++;
                while(arr[l]==arr[l+1])l--;
            }
            else if(sum>target){
                l--;
            }
            else{
                k++;
            }
            }


        }
      }
//------------------------approach of hashing ---------------------

    //   for(int i =0;i<n;i++){
    //     for(int j = i+1;j<n;j++){
    //         set<int> hashSet;
    //         for(int k =j+1;k<n;k++){
    //             int sum = arr[i]+arr[j]+arr[k];
    //             int rem = target-sum;
    //             if(hashSet.find(rem)!=hashSet.end()){
    //                 vector<int> temp = {arr[i],arr[j],arr[k],rem};
    //                 sort(temp.begin(),temp.end());
    //                 st.insert(temp);
    //             }
    //             hashSet.insert(arr[k]);
    //         }
    //     }
    //   }

//-----------------------approach of looping---------------------

    // for(int i =0;i<n;i++){
    //     for(int j =i+1;j<n;j++){
    //         for(int k =j+1;k<n;k++){
    //             for(int l = k+1;l<n;l++){
    //                 if(arr[i]+arr[j]+arr[k]+arr[l]==target){
    //                     vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
    //                     sort(temp.begin(),temp.end());
    //                     st.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    // }

    //-------------------Output Part---------------------
    for(auto a : st){
        for(auto x:a){
            cout<<x<<" ";
        }cout<<endl;
    }
}
