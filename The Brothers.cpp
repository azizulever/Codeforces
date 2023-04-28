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
    string f_name, l_name;
    cin >> f_name >> l_name;
    
    string ff_name, ll_name;
    cin >> ff_name >> ll_name;
    int count = 0;

    for(int i = 0; i < l_name.size(); i++) {
        if(l_name[i] == ll_name[i])
            count++;
    }

    if(count == ll_name.size())
        cout << "ARE Brothers";
    else
        cout << "NOT";

    return 0;
}