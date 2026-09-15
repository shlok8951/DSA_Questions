/*
Problem -> Find the given String is palindrom or not.
*/ 

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool Palindrom(string s){
    int i =0;
    int j = s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]){
             return false;
        }
        i++;
        j--;
    }
    return true;

}

int main(){
    string s ;
    cout<<"Enter the String : ";
    cin>>s;
    bool flag = Palindrom(s);
    if(flag){
        cout<<" Given String is Palindrom ";
    }else{
        cout<<"Given String is not a Palindrom";
    }
 return 0;
   
}
