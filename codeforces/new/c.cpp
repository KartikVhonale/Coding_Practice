#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int flag=1;
    for(int j=0;j<a[0].length();j++){
        char d=a[0][j];
        for(int i=0;i<n;i++){
            if(d!=a[i][j]){
                flag=0;
                break;
            }
        }
        if(flag!=0)count++;
    }
       cout<<count;
        
    return 0;
}