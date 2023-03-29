#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define vec vector<int>
#define nl endl
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    string s1, s2; cin >> s1;
    
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] == 'W' && s1[i+1] == 'U' && s1[i+2] == 'B') {
            i+=2;
            s2.pb(' ');
        }
        else
            s2.pb(s1[i]);
    }
    cout << s2 << nl;

    return 0;
}