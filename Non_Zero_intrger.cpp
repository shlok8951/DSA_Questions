/*
Problem -> Convert a No-Zero integer n into two no-zero integert , their sum should be equal to n.
No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.
*/
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = n-1;
        int b = 1;
        int x,y;
        bool valid;
        while(a>0){
            x = a;
            y = b;
            valid = true;
            while(x>0 || y>0){
               if(x>0){
                int rem1 = x%10;
                if(rem1==0){
                    valid = false;
                    break;
                }
                x = x/10;
               }
               if(y>0){
                int rem2 = y%10;
                if(rem2==0){
                    valid=false;
                    break;
                }
                y = y/10;
               }
            }
            if(valid){
                return {a,b};
            }
            a--;
            b++;
        }
        return {a,b};
       
        
    }
};
