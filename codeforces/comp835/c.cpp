#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,maxi,max2,count;
    cin>>t;
    while(t--!=0){
        cin>>n;
        maxi=0;
        max2=0;
        count=0;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        maxi=b[n-1];
        max2=b[n-2];
        for(i=0;i<n;i++){
            if(a[i]!=maxi){
                cout<<a[i]-maxi<<" ";
            }
            else{
                cout<<maxi-max2<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}