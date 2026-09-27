/*
Problem -> Given a integer n from 0 to n count the integers that have all bit same.
 */

class Solution {
public:
    int countMonobit(int n) {
        int result = 1;
        int count = 1;
        while(result<=n){
            count++;
            result = (result<<1)|1;
            
        }
        return count;
    }
};
