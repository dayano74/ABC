#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

void fill_square(vector<string> &area, int start, int end, char c) {
    for (int x = start; x < end; ++x) {
        for (int y = start; y < end; ++y) {
            area[x][y] = c;
        }
    }
}

int main() {
    int n;
    cin >> n;

    char black = '#';
    char white = '.';

    vector<string> area(n, string(n, white));

    for (int i = 0; i < (n + 1) / 2; ++i) {
        int start = i;
        int end = n - i;

        if (i % 2 == 0) {
            fill_square(area, start, end, black);
        } else {
            fill_square(area, start, end, white);
        }
        // rep(i, n) cout << area[i] << endl;
        // cout << endl;
    }

    rep(i, n) cout << area[i] << endl;
    return 0;
}