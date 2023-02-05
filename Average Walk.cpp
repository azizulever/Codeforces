#include <bits/stdc++.h>
using namespace std;

int main()
{
    int walks, wwm, ans;
    cin >> walks;

    for (int i = 15; i >= 1; i--)
    {
        wwm = i*walks;
        ans = i;
        if (wwm > 3000){
            continue;
        }
    }
    cout << ans;
    return 0;
}