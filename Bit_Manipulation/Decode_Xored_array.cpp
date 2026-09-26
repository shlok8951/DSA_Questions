/*
Problem-> Given a array and the starting element of resultant arrat find the other element in which previous and urrunt value Xor is equal to value of array element.
Property : a^b = c
           a^c = b
  */

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();
        vector<int> result;
        result.push_back(first);
     //------------------------- Solution 1-----------------
        for(int i =0;i<n;i++){
            int j =0;
            while((result[i]^j)!=encoded[i])j++;
            result.push_back(j);
        }
     //-------------------Solution 2---------------
       for(int i =0;i<n;i++){
        result.push_back(result[i]^encoded[i]);
       }
        return result;
        
    }
};
  
