#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = 0;
    set<P> edges;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        if (a == b) {
            ans++;
            continue;
        }
        if (a > b)
            swap(a, b);
        if (edges.count(P(a, b))) {
            ans++;
            continue;
        }
        edges.emplace(a, b);
    }
    cout << ans << endl;
    return 0;
}
