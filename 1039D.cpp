#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<ll> a(n);
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
        }
        vector<ll> ans(n);
        for ( int i = n-1; i >= 0; i-- ) {
            if ( i+1 < n && a[i] > a[i+1] ) ans[i] = ans[i+1] + n - i;
            else if ( i+2 < n && a[i] < a[i+1] ) ans[i] = ans[i+2] + n-i;
            else ans[i] = n-i;
        }

        ll res = 0;
        for ( int i = 0; i < n; i++ ) {
            res += ans[i];
        }
        cout << res << endl;
    }
    return 0;
}
