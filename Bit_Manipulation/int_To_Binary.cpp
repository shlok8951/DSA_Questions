/*
Problem -> Given a integer no convert it into a binory form.
 */

#include<bits/stdc++.h>
using namespace std;

string Covert_Binort(int x){
    string result = "";
    while(x>0){
        int rem = x%2;
        result = to_string(rem) + result;
        x = x/2;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    string ans = Covert_Binort(n);
    cout<<"Binory Form is : "<<ans<<endl;
}
