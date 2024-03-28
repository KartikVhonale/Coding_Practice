#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,n;
    cin >> t;
    while (t-- != 0){
        cin >> n;
        int a[n];
        for ( i = 0; i < n; i++) cin >> a[i];
        x = 1;
        for ( i = 0; i < n - 1 and x== 1; i++){
           if(a[i]<a[i+1]){
             x = 0;
            while (a[i + 1] >= a[i] and i < n - 1) i++;
            if (i == n - 1)
            {
                cout << "YES" << endl;
                break;
            }
            else cout << "NO" << endl;
           }
        }
        if (x == 1) cout << "YES" << endl;
    }
return 0;
}