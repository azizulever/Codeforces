#include <bits/stdc++.h>
using namespace std;

int main() {
    string name; cin >> name;

    set<char> seen;
    string result = "";
    for (const char& c : name) {
        if (seen.count(c) == 0) {
            result += c;
            seen.insert(c);
        }
    }

    if((result.length()) % 2 == 0)
        cout << "CHAT WITH HER!";

    else
        cout << "IGNORE HIM!";

    return 0;
}