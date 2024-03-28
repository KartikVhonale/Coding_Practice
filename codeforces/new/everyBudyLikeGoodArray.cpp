#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j,count;
    cin>>t;
    while(t--!=0){
    	cin>>n;
        int a[n];
        count=0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n-1;i++){
            if(a[i]%2==a[i+1]%2){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}