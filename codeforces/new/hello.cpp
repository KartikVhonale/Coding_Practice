#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,k,r,n;
    cin>>t;
    while(t--!=0){
        cin>>k>>r>>n;
        if((r*n)%k==0) cout<<"Nathan"<<endl;
        else cout<<"Thiago"<<endl;
    }
    return 0;
}