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

    int year = 0, month = 0, day = 0;

    while(n != 0) {
        if(n >= 365) {
            n -= 365;
            year++;
        }
        else if(n >= 30) {
            n -= 30;
            month++; 
        }
        else {
            n -= 1;
            day++;
        }
    }

    cout << year << " years\n";
    cout << month << " months\n";
    cout << day << " days\n"; 

    return 0;
}