#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2==0){
        cout<<0<<endl;
        continue;
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i]%2==0){
            arr[i]/=2;
            while(arr[i]%2!=1 && arr[i]){
                count++;
                arr[i]/=2;
            }
            if(arr[i]==0) count=1e9;
        }
        else{
            arr[i]/=2;
            while(arr[i]%2!=0){
                count++;
                arr[i]/=2;
            }
        }
        mini=min(mini,count);
    }
    cout<<mini<<endl;
  }
  return 0;
}