#include<iostream>
#include<vector>
using namespace std;

bool solve() {
    int n; cin >> n;
    vector<int> a(n);
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
    }

    int mn = a[0];
    for ( int i = 1; i < n; i++ ) {
        if ( a[i] > 2*mn - 1 ) return false;
        mn = min( a[i], mn );
    }
    return true;
}

int main () {
    int t; cin >> t;
    while ( t-- ) {
        cout << ( solve() ? "YES" : "NO" ) << endl;
    }
    return 0;
}
