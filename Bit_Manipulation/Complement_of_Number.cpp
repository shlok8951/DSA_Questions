/*
Problem-> Given a number , complemet it's bits and return new created number.
 */

class Solution {
public:
    int findComplement(int num) {
        int i =0;
        int temp = num;
        while(temp>0){
            num = num^(1<<i);
            i++;
            temp = temp>>1;
        }
        return num;
    }
};
