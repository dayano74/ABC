#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

void fill_square(vector<string> &area, int i, int j, char c) {
    // fill square with (i, i) (j, j)
    for (int x = i; x < j; ++x) {
        for (int y = i; y < j; ++y) {
            area[x][y] = c;
        }
    }
}

int main() {
    int n;
    cin >> n;

    char black = '#';
    char white = '.';

    vector<string> area(n, string(n, '?'));
    rep(i, n) cout << area[i] << endl;
    printf("\n");
    rep(i, n) {
        int j = n + 1 - i;
        if (i <= j && i % 2 == 1) {
            // fill square with black (i, i) (j, j)
            fill_square(area, i, j, black);
        } else if (i <= j && i % 2 == 0) {
            // fill square with white (i, i) (j, j)
            fill_square(area, i, j, white);
        }
        printf("i = %d\n", i);
        rep(i, n) cout << area[i] << endl;
        printf("\n");
    }
    rep(i, n) cout << area[i] << endl;
    return 0;
}
