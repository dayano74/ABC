#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    int first;
    cin >> n >> first;
    rep(i, n - 1) {
        int second;
        cin >> second;
        if (second <= first) {
            cout << "No" << endl;
            return 0;
        }
        first = second;
    }
    cout << "Yes" << endl;
    return 0;
}
