#include <bits/stdc++.h>
using namespace std;

void display(int n)
{
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "#";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    display(n);

    return 0;
}