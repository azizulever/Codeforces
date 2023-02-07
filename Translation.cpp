#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, s2;
    cin >> s >> s2;

    reverse(s.begin(), s.end());
    string s3 = s;

    if(s3 == s2)
        cout << "YES\n";
    else 
        cout << "NO\n";
        
    return 0;
}