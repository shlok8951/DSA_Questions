/*
Problem -> Given a number find the fibonacci no of this.
 */
class Solution {
public:
    int fib(int n) {
        if(n<=1)
          return n;
        int result  = fib(n-1)+fib(n-2);
        return result;  
    }
};
