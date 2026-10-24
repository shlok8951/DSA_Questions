/*
Problem-> Given a String in which only B,W elements and a k value find the min replacement of W to B to find k lenth black string.
  */
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int mincount = INT_MAX;
        while(r<n){
            if(blocks[r]=='W')count++;
            if((r-l+1)>k){
                if(blocks[l]=='W')count--;
                l++;
            }
            if((r-l+1)==k)
               mincount = min(mincount,count);
            r++;
        }
        return mincount;
    }
};
