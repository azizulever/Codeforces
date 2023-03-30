#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define vec vector<int>
#define nl endl
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    int n, c1, c2, c3, c4, a1, b=0, d, e=0, f, s=0, i;
    cin >> n;

    c1 = c2 = c3 = c4 = 0;

    vec a(n);
    for0 {
        cin >> a[i];
        if(a[i] == 4)
            c4++;
        if(a[i] == 3)
            c3++;
        if(a[i] == 2)
            c2++;
        if(a[i] == 1)
            c1++;
    }
    d = c2 % 2;
    s = c4+(c2/2);
    if(c3>c1) {
        s=s+c1;
        a1=c3-c1;
        s=s+a1;
    }
    else {
        s=s+c3;
        b=c1-c3;
    }

    if(b>=2&&d==1) {
		s++;
		b=b-2;
		d=b%4;
		if(d>0)
			d=1;
		s+=d;
		b=b/4;
		s+=b;
	}
	else if(b==1 && d==1) {
		s++;
	}
	else if(b > 0 && d==0)
	{
		d = b%4;
		if(d>0)
			d=1;
		s+=d;
		b=b/4;
		s+=b;
	}
	else if(d==1)
		s++;

    cout << s << nl;

    return 0;
}