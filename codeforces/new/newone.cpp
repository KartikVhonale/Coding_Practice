#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int one=1e9+7;
int main(){
    int t;
    long long int n,ans,i;
    cin>>t;
    while(t--!=0){
        cin>>n;
        ans=n*(n-1);
        for(i=1;i<=n;i++){
            ans=((ans%one)*i)%one;
            //kartik
        }
        cout<<ans<<endl;
    }
    return 0;
}