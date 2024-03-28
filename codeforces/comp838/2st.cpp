#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,b,c,d,i;
    cin>>t;
    while(t--!=0){
        int n;
cin>>n;
int a[n];
cout<<n<<endl;
for(i=0;i<n;i++)cin>>a[i];
for(i=0;i<n;i++){
     b=log2(a[i]);
     c=pow(2,b+1);
     d=c-a[i];
    cout<<i+1<<" "<<d<<endl;
}
    }
    return 0;
}