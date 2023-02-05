#include <bits/stdc++.h>
using namespace std;

int n;
int BitLanguage(int n)
{
    string s;
    int x = 0;
    for (int i = 1; i <= n; i++){
        cin >> s;
        if(s == "x++" || s == "++x" || s == "X++" || s == "++X")
            x++;
        if(s == "x--" || s == "--x" || s == "X--" || s == "--X")
            x--;
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    cout << BitLanguage(n);

    return 0;
}