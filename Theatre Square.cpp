#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, a, sum, sum2;
    cin >> m >> n >> a;
    
    sum = (n*m) - (a*a);
    sum2 = sum - (a*a);

    
    cout << sum2;

    return 0;
}