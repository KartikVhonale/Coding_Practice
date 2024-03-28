#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int len;
    string s;
    cin>>t;
    while(t-->0){
        cin>>s;
        len=s.length();
        if(len>10){len-=2;
        cout<<s[0]<<len<<s[len+1]<<endl;
    }
    else cout<<s<<endl;
    }
    return 0;
}
