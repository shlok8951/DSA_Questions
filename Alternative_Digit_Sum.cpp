/*
Problem -> Given the Integer value sum the alternative digits.
  */

class Solution {
public:
    int alternateDigitSum(int n) {
        int sum1 =0;
        int sum2 =0;
        int count =0;
        int num = n;
        while(num>0){
            count++;
            if(count%2==0)sum1 += num%10;
            else sum2 += num%10;
    
            num /= 10;
        }
        if(count%2==0)return sum1-sum2;
            return sum2-sum1;
    }
};
