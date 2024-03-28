#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,min,tp,k,n,m;
    cin>>t;
    set<int>r;
    while(t--){
       cin>>n>>m;
       int a[n];
       min=INT_MIN;
       for(int i=0; i<n; i++){
           cin>>a[i];
           r.insert(a[i]);
       }
       for(int i=0; i<n; i++){
           if(min<a[i])
           min=a[i];
       }
       int z=1;
       int sum=0;
       while(z){
           if(r.find(z)!=r.end()){
               z++;
               continue;
           }
           sum+=z;
           if(sum>m){
               cout<<"NO"<<endl;
               break;
           }
           r.insert(z);
           if(sum==m){
               tp=0;
               for(k=1; k<=min; k++){
                   if(r.find(k)!=r.end())
                   continue;
                   tp=1;
                   break;
               }
               if(!tp) cout<<"YES"<<endl;
               else cout<<"NO"<<endl;
               break;
           }
           z++;
       }
    }
    return 0;
}