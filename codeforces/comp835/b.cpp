#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,maxi,a;
    string s;
    cin>>t;
    while(t--!=0){
        cin>>n;
        cin>>s;
        maxi=0;
        for(i=0;i<n;i++){
            a=int(s[i])-96;
            maxi=max(maxi,a);
        }
        cout<<maxi<<endl;
    }
    return 0;
}