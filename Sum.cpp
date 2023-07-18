#include <bits/stdc++.h>
#define nl endl
#define pb push_back
#define int long long
#define vec vector<int>
#define N cout << "NO" << nl
#define Y cout << "YES" << nl
#define bsort sort(v.begin(), v.end())
#define esort sort(v.end(), v.begin())
#define tc int t; cin >> t; while(t--)
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tc {
        int a, b, c;
        cin >> a >> b >> c;

        if((a+b == c) || (a+c == b) || (b+c == a))
            Y;
        else
            N;
    }

    return 0;
}