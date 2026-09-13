/*
Problem -> Given a aaray and find the all subsequnce of 3 digits which sum is equal to 0.
  */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {    
    //----------------- Input Part-------------
    int n ;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Entyer the array element : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    //------------Logic part-----------------
    sort(arr,arr+n);
    set<vector<int>> st;

    //--------------------- Best Approach------------------
   
   for(int i =0;i<n-2;i++){
    if(i!=0 && arr[i]==arr[i-1])continue;
    int j = i+1;
    int k = n-1;
    while(j<k){
        int sum = arr[i]+arr[j]+arr[k];
        if(sum==0){
            vector<int> temp = {arr[i],arr[j],arr[k]};
            st.insert(temp);
            j++;
            k--;
            while(arr[k]==arr[k+1])k--;
            while(arr[j]==arr[j-1])j++;
        }
        else if(sum>0){
            k--;
        }
        else{
            j++;
        }
    }
   }

//-------------------------- Optimized Approach---------------

    // for(int i =0;i<n;i++){
    //      set<int> hash1;
    //     for(int j = i +1;j<n;j++){
    //        int sum = arr[i]+arr[j];
    //         int rem = -(sum);
    //         if(hash1.find(rem)!=hash1.end()){
    //             vector<int> temp = {arr[i],arr[j],rem};
    //             sort(temp.begin(),temp.end());
    //             st.insert(temp);
    //         }
    //         hash1.insert(arr[j]);
    //     }
    // }


//-------------------------Burst Appoarch-----------------

    // for(int i =0;i<n;i++){
    //     for(int j =i+1;j<n;j++){
    //         int sum =0;
    //         for(int k = j+1;k<n;k++){
    //             sum = arr[i]+arr[j]+arr[k];
    //             if(sum ==0){
    //                 vector<int> temp = {arr[i],arr[j],arr[k]};
    //                 sort(temp.begin(),temp.end());
    //                 st.insert(temp);
    //             }

    //         }
    //     }
    // }

    //---------------------Output Part--------------
 
    for(auto x : st){
        for(auto y : x){
            cout<<y<< " ";
        }
        cout<<endl;
    }
    return 0;
}
