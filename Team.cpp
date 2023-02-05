#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, N[3];
    cin >> n;
    
    int count = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < 3; j++){
            cin >> N[j];
        }
        if(N[0] + N[1] + N[2] >= 2)
            count++;
    }
    cout << count;

    return 0;
}