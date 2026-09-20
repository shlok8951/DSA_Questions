/*
Problem -> Given a array Find the all subarray.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    //------------------Input ------------------
    int n ;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    //--------------Logic Part-----------
    vector<vector<int>> result;
    int subarray =  1<<n;
    for(int i =0;i<subarray;i++){
        vector<int> res;
        for(int j =0;j<n;j++){
            if(i&1<<j){
                res.push_back(arr[j]);
            }
        }
        result.push_back(res);
    }

    //----------------Output----------

 cout<<"Subarrays : "<<endl;;
    for(auto x: result){
        for(auto y: x)
          cout<<y;
        cout<<endl;  
    }
}
