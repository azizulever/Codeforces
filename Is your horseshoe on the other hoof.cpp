#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
  	int have[4];
 	for(int i = 0; i < 4; i++) {
 		cin >> have[i];
 	}
  	int count = 0;
  	
  	sort(have, have+4);
  	
  	for(int i = 0; i < 3; i++) {
  		if(have[i] == have[i+1])
  			count++;
  	}
	cout << count;

    return 0 ;
}