#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int sum,t,i,count,a,m,s;
    cin>>t;
    while(t--!=0){
        cin>>m>>s;
        count=0;sum=0;
        for(i=0;i<m;i++){
            cin>>a;
            sum+=a;
        }
        sum+=s;
        for(i=m;i<=m+1000;i++){
            if(2*sum==i*(i+1)){
                count=1;
                break;
            }
        }
        if(count==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}