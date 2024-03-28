#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int MAXN = 5005;

int dp[MAXN][MAXN];

int main() {
    int N, Q;
    cin >> N >> Q;

    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            for (int k = 1; k <= Q; k++) {
                int type, l, r;
                cin >> type >> l >> r;
                if (type == 1) {
                    if (j >= l && j <= r) {
                        dp[i][j] = dp[i][j];
                    } else {
                        dp[i][j] = 0;
                    }
                } else {
                    int m = i - j;
                    int m_only = max(0, l - m);
                    int p_only = max(0, l - j);
                    int neither = max(0, r - i + m + j);
                    int teams = ((dp[i-1][j-1] - dp[i-1][p_only-1] + MOD) % MOD +
                                 (dp[i-1][j] - dp[i-1][l-1] + MOD) % MOD -
                                 (dp[i-1][j-1] - dp[i-1][p_only-1] + MOD) % MOD -
                                 (dp[i-1][j] - dp[i-1][m_only-1] + MOD) % MOD +
                                 dp[i-1][neither]) % MOD;
                    dp[i][j] = (dp[i][j] + teams) % MOD;
                }
            }
        }
    }

    int ans = 0;
    for (int j = 1; j <= N; j++) {
        ans = (ans + dp[N][j]) % MOD;
    }
    cout << ans << endl;

    return 0;
}
