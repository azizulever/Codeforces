#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    int a, b, c, res1, res2, res3, res4, res5;
    cin >> a >> b >> c;

    res1 = a+b*c;
    res2 = a*(b+c);
    res3 = a*b*c;
    res4 = (a+b)*c;
    res5 = a+b+c;

    cout << max(res1, max(res2, max(res3, max(res4, res5))));

    return 0;
}