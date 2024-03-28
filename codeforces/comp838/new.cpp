#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,sum,n;
    cin>>t;
    while(t--!=0){
        cin>>n;
        string a="";
        char b[n];
        for(int i=0;i<n;i++)cin>>b[i];
        if(b[0]=='0')sum=0;
        else sum=1;
        for(int i=1;i<n;i++){
            if(sum==0&&b[i]=='1'){
                sum++;
                a+='+';
            }
            else if(sum==0&&b[i]=='0'){
                a+='+';
            }
            else if(sum==1&&b[i]=='1'){
                sum--;
                a+='-';
            }
            else{
                a+='+';
            }
        }
        cout<<a<<endl;
    }
    return 0;
}