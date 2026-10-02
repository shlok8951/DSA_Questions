/*
Problem-> Given the String in which many character and special syntax revers the only characters in the string.
 */

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int i =0;
        int j = n-1;
        while(i<=j){
            while(i<n && !((s[i] >=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122)))i++;
            while(j>=0 && !((s[j] >=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122)))j--;
            if(i<=j){
            swap(s[i],s[j]);
            i++;
            j--; 
            }
           
        }
        return s;
        
    }
};
