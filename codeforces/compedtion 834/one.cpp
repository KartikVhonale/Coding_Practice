#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i,count;
    string s;
    cin>>t;
    while(t--!=0){
        cin>>s;
        count=0;
        if(s.length()==1&&s[i]!='Y'&&s[i]!='s'&&s[i]!='e')count=1;
        for(i=0;i<s.length()-1;i++){
            if(s[i]!='Y'&&s[i]!='s'&&s[i]!='e'){
                count=1;
                break;
            }
            if(( s[i]=='e'&& s[i+1]!='s')||(s[i]=='Y'&& s[i+1]!='e')||(s[i]=='s'&&s[i+1]!='Y')){
                count=1;
                break;
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}