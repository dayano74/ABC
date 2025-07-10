#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
	int cards_cnt = 7;
	vector<int> cards(cards_cnt);
	vector<int> types(13);
	rep(i, cards_cnt) cin >> cards[i];

	rep(i, 13) types[i] = 0;
	rep(i, cards_cnt) types[cards[i] - 1]++;

	bool three = false;
	bool two = false;
	for (int i = 0; i < 13; ++i)
	{
		if (types[i] >= 3)
		{
			three = true;
			types[i] = 0;
			break;
		}
	}
	for (int i = 0; i < 13; ++i)
	{
		if (types[i] >= 2)
			two = true;
	}
	if (three > 0 && two > 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}