#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,mini,n,count,k;
    cin>>t;
    while(t--!=0){
        cin>>n;
        long long int a[n];
        mini=INT_MAX;
        count=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mini=min(a[i],mini);
        }
        for(int i=0;i<n;i++)if(a[i]%mini!=0)count=0;
        if(count==1){cout<<0<<endl;n=0;}
        else{ cout<<n<<endl;
        for(int i=0;i<n;++i){
            if(a[i]%mini!=0){
                k=abs(mini-(a[i]%mini));
                if(k<a[i]){
                    while(k<a[i])k+=mini;
                    k-=mini;
                    cout<<i+1<<" "<<k<<endl;
                    count++;
                }
                else{
                    while(k>0){
                        if(k>a[i]){
                            cout<<i+1<<" "<<a[i]<<endl;
                            k-=a[i];
                        }
                        else{
                            cout<<i+1<<" "<<k<<endl;
                            k=0;
                        }
                        count++;
                    }
                }
            }
        }}
        while(count<n){
                cout<<count+1<<" "<<0<<endl;
                count++;
            }
    }
    return 0;
}