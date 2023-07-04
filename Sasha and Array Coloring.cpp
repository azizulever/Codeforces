#include <bits/stdc++.h>
#define nl endl
#define pb push_back
#define int long long
#define vec vector<int>
#define N cout << "NO" << nl
#define Y cout << "YES" << nl
#define tc int t; cin >> t; while(t--)
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tc {
        int n, answer = 0;
        cin >> n;
        vec v(n);
        for0 {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int front = 0, rare = n-1;

        for(front; front < rare; front++) {
            answer += v[rare] - v[front];
            rare--;
        }
        cout << answer << nl;
    }

    return 0;
}