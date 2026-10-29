/*
Problem -> Given the Array of integer find the min and max element in the array.
*/

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min_value = arr[0];
        int max_value = arr[0];
        for(int i =0;i<arr.size();i++){
            if(arr[i]<min_value)min_value = arr[i];
            if(arr[i]>max_value)max_value = arr[i];
        }
        return {min_value,max_value};
        
    }
};

  
