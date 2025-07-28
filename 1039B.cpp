#include<bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a(n);
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
        }
        int i = 0, j = n-1; 
        bool check = false;
        string ans = "";
        while ( i <= j ) {

            if ( check ) {

                if ( a[i] <= a[j] ) {
                    ans += 'R';
                    j--;
                }
                else {
                    ans += 'L';
                    i++;
                }

                check = !check;
            }

            else {
                if ( a[i] <= a[j] ) {
                    ans += 'L';
                    i++;
                }
                else {
                    ans += 'R';
                    j--;
                }

                check = !check;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
