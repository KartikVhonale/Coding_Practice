#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    long long int i,n,count, q,a;
    while(t-->0){
        cin>>n>>q;
        if(n==2)a=q*2-1;
        else{ a=q+q/n;
              a+=a/n-q/n;
        }
    cout<<a<<endl;
    }
    return 0;
}
