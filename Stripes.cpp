
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
    #define io ios_base::sync_with_stdio(false); cin.tie(NULL)
    using namespace std;

    int32_t main() {
        io;

        tc {
            string s[8], ans;
            int R;
            for(int i = 0; i < 8; i++) {
                cin >> s[i];
            }
            ans="-1";

            for(int r = 0; r < 8; r++){
                R = 0;
                for(int b = 0; b < 8; b++) {
                    if(s[r][b] == 'R') {
                        R++;
                    }   
                }
                if(R == 8) {
                    ans = "R";
                    break;
                }
            }
            // cout << (R == 8) ? "R\n" : "B\n";

            if(ans == "R") {
                cout << ans << nl;
            }
            else cout << "B\n";
        }

        return 0;
    }