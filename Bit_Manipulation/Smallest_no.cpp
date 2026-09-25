/*
Problem-> Given a integer number return the equal or greater no which have all set bits.
 */

class Solution {
public:
    int smallestNumber(int n) {
        int result =0;
        int i=0;
        while(n>0){
            result = result|(1<<i);
            n = n>>1;
            i++;
        }
        return result;
        
    }
};
