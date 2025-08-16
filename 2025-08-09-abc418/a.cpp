#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n < 3) {
        cout << "No\n";
        return 0;
    }
    if (s.substr(n - 3, 3) == "tea") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
