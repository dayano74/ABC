#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
	int Q;
	cin >> Q;

	vector<int> added_cards(100);
	rep(i, Q)
	{
		int n;
		cin >> n;
		if (n == 1)
		{
			int x;
			cin >> x;
			added_cards.push_back(x);
		}
		if (n == 2)
		{
			if (added_cards.size())
			{
				int m;
				m = added_cards.back();
				added_cards.pop_back();
				cout << m << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
	}
	return 0;
}