#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int t,n,i,m,j;
//     cin>>t;
//     while(t--!=0){
//         cin>>n>>m;
//         long long int y[m];
//         long long int a[n+m];
//         for(i=0;i<n+m;i++)cin>>a[i];
//             long long int sum=0;
//         if(n>m){
//              sort(a,a+n+m);
//         for(i=m+n-1;i>m-1;i--){
//             sum+=a[i];
//         }
//         }
//         else{
//             for(i=0;i<m;i++){
//                 y[i]=a[n+i];
//             }
//             sort(y,y+m);
//             for(i=m-1,j=0;j<n;i--,j++)
//                 sum+=y[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

int main(){
    int t,i,m,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<long long> x(n);
        vector<long long> y(m);
        for(i=0;i<n;i++) cin>>x[i];
        for(i=0;i<m;i++) cin>>y[i];
        priority_queue<int,vector<int>,greater<int>> d;
        for(int i=0;i<n;i++) d.push(x[i]);
        long long sum=0;
        for(i=0;i<m;i++){
            int top=d.top();
            d.pop();
            d.push(y[i]);
        }
        while(!d.empty()){
            sum+=d.top();
            d.pop();
        }
        cout<<sum<<endl;
    }
    return 0;
}
