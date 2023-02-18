#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string j = "";

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != '+'){
            j += s[i];
        }
    }

    sort(j.begin(), j.end());

    string result = "";

    for(int k = 0; k < j.size(); k++) {
        result += j[k];
        if(j.size() != k+1)
            result += "+";
    }

    cout << result;

    return 0;
}
