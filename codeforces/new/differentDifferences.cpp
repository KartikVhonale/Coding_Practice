#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,j,n,k,diff;
    cin>>t;
    while(t--!=0){
    	cin>>k>>n;
    	j=1;diff=1;
    	while(k--!=0){
    		cout<<j<<" ";
    		if(n-(j+diff)>=(k-1)){
    			j+=diff;
    			diff++;
    		}
    		else j++;
    	}
    	cout<<endl;
    }
    return 0;
}