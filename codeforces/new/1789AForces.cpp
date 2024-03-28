// #include <bits/stdc++.h>
// using namespace std;

// bool isGood(vector<int>& arr) {
//     int gcdV = arr[0];
//     for (int i = 1; i < arr.size(); i++) {
//         gcdV = __gcd(gcdV, arr[i]);
//     }
//     return gcdV <= arr.size();
// }

// bool isBeautiful(vector<int>& arr) {
//     for (int len = 2; len <= arr.size(); len++) {
//         vector<int> prefix(arr.begin(), arr.begin() + len);
//         if (!isGood(prefix)) return false;
//     }
//     return true;
// }

// bool Beautiful(vector<int>& arr) {
//     if (isBeautiful(arr)) {
//         return true;
//     }
//     sort(arr.begin(), arr.end());
//     do {
//         if (isBeautiful(arr)) {
//             return true;
//         }
//     } while (next_permutation(arr.begin(), arr.end()));
//     return false;
// }

// int main() {
//     int n,t;
//     cin>>t;
//     while(t-->0){
//         cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     if (Beautiful(arr)) {
//         cout << "Yes\n";
//     } else {
//         cout << "No\n";
//     }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,mini;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        mini=INT_MAX;
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
            mini=min(mini,__gcd(a[i], a[j]));
        if(mini>2)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}