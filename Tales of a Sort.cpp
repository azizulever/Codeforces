#include <bits/stdc++.h>
#define nl endl
#define pb push_back
#define ll long long
#define vec vector<int>
#define N cout << "NO" << nl
#define Y cout << "YES" << nl
#define bsort sort(v.begin(), v.end())
#define esort sort(v.end(), v.begin())
#define tc int t; cin >> t; while(t--)
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define io ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

void yoo() {
    int n, maxi = 0;
    cin >> n;

    vec a(n);
    for0 {
        cin >> a[i];
    }
    
    for(int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) {
            maxi = max(maxi, a[i]);
        }
    }
    cout << maxi << nl;
}

int32_t main() {
    io;

    tc {
        yoo();
    }

    return 0;
}
