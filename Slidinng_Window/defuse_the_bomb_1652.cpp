/*
Problem -> Given an array of numbers andd the value k return the array in which the  sum of k element at the index.
  */

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>res(n,0);
        if(k==0)return res;
        int l,r;
        if(k<0){
             l=n+k;
             r = n-1;
        }else{
            l =1;
            r = k;
        }
        int sum =0;
        int i = l;
        while(i<=r){
            sum = sum+code[i];
            i++;
        }
        res[0] = sum;
        for(int i =1;i<code.size();i++){
            sum = sum-code[l];
            l = (l+1)%n;
            r = (r+1)%n;
            sum = sum+code[r];
            res[i] = sum;
        }
        return res;
    }
};
