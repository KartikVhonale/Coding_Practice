#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,mini,count;
    cin>>t;
    while(t--!=0){
        cin>>n;
        vector<int> a(n);
        mini=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
        if(sum%2==0)mini=0;
        else{
        for(int i=0;i<n;i++){
            count=1;
            if(a[i]%2==0){
                a[i]/=2;
                while(a[i]%2!=1&&a[i]){
                    a[i]/=2;
                    count++;
                    }
            }
            else{
                a[i]/=2;
                while(a[i]%2!=0){
                    a[i]/=2;
                    count++;
                }
            }
            mini=min(mini,count);
        }}
        cout<<mini<<endl;
    }
    return 0;
}