/*
  Problem -> given a No and the Bit position check it is set or not.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter The Decimal Number : ";
    cin>>num;

     int b;
    cout<<"Enter the bit no check it is set or not : ";
    cin>>b;

    //------------Method 1--------------(left shift)
    // if((num & (1<<b)) !=0){
    //     cout<<"Bit is set.";
    // }else{
    //     cout<<"Bit is reset ";
    // }

    //------------Method 2 ------------------(right shift)
    if(num>>b & 1 !=0){
        cout<<"Bit is set.";
    }else{
        cout<<"Bit is reset.";
    }

    return 0;
}
