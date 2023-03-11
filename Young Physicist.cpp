#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, z, xi, yi, zi;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> xi >> yi >> zi;
		x += xi;
		y += yi;
		z += zi;
	}

	if(x != 0) cout << "NO";
	else if(y != 0) cout << "NO";
	else if(z != 0) cout << "NO";
	else cout << "YES";

	return 0;
}