#include <bits/stdc++.h>
using namespace std;

const int MAXN = 55;

int t, n;
int a[MAXN][MAXN];

int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);

        // Fill the matrix with the integers from 1 to n * n
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] = (i - 1) * n + j;

        // Generate the beauty matrix
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] = a[i][j] + (i + j - 1) % (2 * n);

        // Print the beauty matrix
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }
    return 0;
}
