#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[200];
    int i;

    for (i = 0; i != '\n'; i++)
    {
        cin >> str[i];

        if (str[i] == '.')
            cout << "0";
        if (str[i] == '-.')
            cout << "1";
        if (str[i] == '--')
            cout << "2";
    }
    
    return 0;
}