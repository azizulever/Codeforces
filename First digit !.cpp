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
    int n; cin >> n;

    int value4 = n/1000;
    int value3 = n/100;

    if(n > 999) {
        if(value4%2 == 0)
            cout << "EVEN";
        else 
            cout << "ODD";
    }
    
    else
        if(value3%2 == 0)
            cout << "EVEN";
        else 
            cout << "ODD";

    return 0;
}