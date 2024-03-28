#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i,count;
    string s,a;
    cin>>t;
    while(t--!=0){
        cin>>s;
        a="";
        count=0;
        for(i=0;i<20;i++){
            a+="Yes";
        }
        if((i=a.find(s,0))==string::npos){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}