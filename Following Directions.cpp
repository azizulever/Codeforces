#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n, x = 0, y = 0, pass = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
                y--;
            else if (s[i] == 'L')
                x--;
            else
                x++;

                if (x == 1 && y == 1){
                    pass = 1;
                }
        }
        cout << (pass ? "YES\n" : "NO\n");
    }

    return 0;
}