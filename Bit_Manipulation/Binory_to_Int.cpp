/*
Problem -> convert the given binory string into the integer number 
*/

#include<bits/stdc++.h>
using namespace std;


int Covert_Decimal(string s){
    int n = s.size();
    int result = 0;
    int p2 = 1;
    for(int i=n-1;i>=0;i--){
       // result = result+ (s[i]-'0')*pow(2,(n-1-i));
       if(s[i]=='1'){
        result = result  + p2;
       }
       p2 = p2*2;
    }
    return result;
}

int main(){
   
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int num = Covert_Decimal(s);
    cout<<"The Decimal Form is  : "<<num<<endl;
}

