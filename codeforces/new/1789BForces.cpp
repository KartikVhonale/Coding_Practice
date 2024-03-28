#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,left,n,right,count,read,count2;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        left=0;
        right=n-1;
        count=0;
        count2=0;
        read=1;
        while(left<=right){
            if(s[left]==s[right]&&count>0)read=0;
            else if(read==1)count++;
            else count2++;
            left++;right--;
        }
        if(count2>0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}