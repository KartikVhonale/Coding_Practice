#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll> arr) {
    for(ll i = 0; i < arr.size() - 1; i++) if(arr[i] != arr[i+1]) return false;
    return true;
}

void solveit() {
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];

    if(check(arr)) {
        cout << 0 << endl;
        return;
    }
    vector<vector<ll>> res;
    vector<ll> prev = arr;
    while(check(arr) == false) {
        ll minVal = INT_MAX;
        ll idx = -1;
        for(ll i = 0; i < n; i++) {
            if(arr[i] < minVal) {
                minVal = arr[i];
                idx = i;
            }
        }
        bool ok = false;
        for(ll i = 0; i < n; i++) {
            if(arr[i] != minVal and arr[i] > minVal) {
                ll y = (arr[i] / minVal);
                if(arr[i] % minVal != 0) y++;
                res.push_back({i , idx});
                arr[i] = y;
                ok = true;
            }
        }
        if(arr == prev) {
            cout << -1 << endl;
            return;
        }
        prev = arr;
    }
    cout << res.size() << endl;
    for(auto it : res) cout << it[0] + 1 << " " << it[1] + 1 << endl;

}

int main(){
    ll t; cin>>t;
    while(t--){
        solveit();
    }
}