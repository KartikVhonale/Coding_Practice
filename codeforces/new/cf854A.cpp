#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,i,count,temp;
    cin>>t;
    while(t--){
        cin>>n>>m;//input
        int a[m];
        map<int,int> r;//map
        for(i=0;i<m;i++) cin>>a[i];//input2
        for(i=1;i<=n;i++){
            r[i]=-1;
        }temp=1;count=n;
        for(i=0;i<m;i++){
            if(count==0)break;//breaking condition
            if(r.find(a[i])==r.end()){
                r[a[i]]=1;
                r[count]=temp;
                count--;
            }
            temp++;
        }
        for(auto b: r){
            if(b.first<=n)cout<<b.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
