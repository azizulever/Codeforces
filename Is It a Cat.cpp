#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define nl '\n'
#define tc int t; cin >> t; while(t--)
using namespace std;
 
int32_t main() {
    tc{
        int n;
        cin >> n;
        string s = "meow" ;
        string s1 ;
        cin >> s1 ;
        for( int i = 0; i < n; i++)
        {
            //  if( s1[i] <= 90) s1[i] += 32;
            s1[i] = tolower(s1[i]);
        }
        // cout << s1<< endl;
        string s2 = "";
        s2.pb(s1[0]);
        for(int i = 1; i < n; i++) {
             if(s1[i] != s1[i - 1]) 
                s2.pb(s1[i]);
        }
        //cout << s2<< endl;
        if(s2 == s)
            cout << "YES";
        else 
            cout << "NO";
        
        cout << nl;

    }

     return 0;
}