#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[55];
    int n, k;
    cin >> n >> k;
    
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }  

    for(int i = 0; i < n; i++)
    {
        if(a[i] >= a[k-1] && a[i] > 0)
            counter++;
    }
    cout << counter << endl;
    return 0;
}