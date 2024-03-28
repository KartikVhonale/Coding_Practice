#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c; cin>>t;
    while(t--){
        string s;
        cin>>s;
        c=0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='U'){
                st.push(s[i]);
                c++;
            }
            else if(c!=0){
                while(st.top()!='M'){
                    st.pop();
                }
                st.pop();
            }
            else{
                st.push('?');
                break;
            }
        }
        if(!st.empty())cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}