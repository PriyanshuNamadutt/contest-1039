#include<iostream>
#include<vector>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        ll c; cin >> c;
        vector<ll> a(n);
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
        }
        vector<int> b(n);
        for ( int i = 0; i < n; i++ ) {
            int cnt = 0;
            while ( a[i] <= c ) {
                cnt++;
                a[i] *= 2;
            }
            b[i] = cnt;
        }
        sort( b.begin(), b.end() );
        int time = 1, ans = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( b[i] == 0 ) {
                ans++;
                continue;
            }
            if ( b[i] >= time ) time++;
            else ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
