/*
Problem -> Given a array of integer and a 2-D array that have queries (left and wight index of subarray) return the array of Xor of queries.
*/

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefix(n+1);
        prefix[0]  = 0;
        prefix[1] = arr[0];
        int a = arr[0];
        for(int i=1;i<n;i++){
          prefix[i+1] = a = a^arr[i];
        }
        vector<int> result;
        for(auto x : queries){
         result.push_back(prefix[x[1]+1]^prefix[x[0]]);
        }
        return result;
    }
};
