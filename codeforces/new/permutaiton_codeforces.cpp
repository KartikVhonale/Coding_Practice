#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,i,j;
    cin>>t;
    while(t--!=0){
        cin>>n>>k;
        int a[n];
        i=0;j=n-1;
        while(i<j){
            cout<<j+1<<" "<<i+1<<" ";
            j--;i++;
        }
        if(n%2!=0)cout<<(n+1)/2<<" ";
        cout<<endl;
    }
    return 0;
}