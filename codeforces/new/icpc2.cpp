#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    double c1,c2;
    while(t--){
       int n;
       cin>>n;
       int flag=0;
       double a[n*2];
       for(int i=0;i<2*n;i++){
        cin>>a[i];
       }
       sort(a,a+2*n);
       int left=0;
       int right=n*2-1;
       c2=(a[left]+a[right])/2;
       while(left<right){
        c1=(a[left]+a[right])/2;
        left++;right--;
        if(c1!=c2){
            flag=1;
            break;
        }
       }
       if(flag==0)cout<<"PERFECT"<<endl;
       else cout<<"IMBALANCED"<<endl;
    }
    return 0;
}