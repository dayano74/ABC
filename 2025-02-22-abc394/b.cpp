#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<int, string>> s;

    rep(i, n) {
        string ns;
        cin >> ns;
        // s[i] = make_pair(ns, ns.length());
        s.emplace_back(ns.length(), ns);
    }
    sort(s.begin(), s.end());
    rep(i, n) cout << s[i].second;
    cout << endl;
    return 0;
}
