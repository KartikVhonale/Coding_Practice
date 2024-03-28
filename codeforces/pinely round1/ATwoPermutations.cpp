#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b;
    cin>>t;
    while(t--!=0){
        cin>>n>>a>>b;
        if(n==a&&a==b&&n==b)cout<<"YES"<<endl;
        else if(n-1>a+b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}