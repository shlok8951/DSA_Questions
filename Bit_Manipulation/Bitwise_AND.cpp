/*
Problem -> Given range inclusive find the Bitwise AND of all b/w range.
 */

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    
        if(left==right)return left;
        if(left==0 || left==1)return 0;
        int shift=0;
        while(left!=right){
            left >>=1;
            right >>= 1;
            shift++;
        }
        return (left<<shift);  
    }
};
