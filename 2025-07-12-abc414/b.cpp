#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
	int n;
	cin >> n;

	ll cnt = 0;
	vector<string> s;
	vector<ll> cnt_set(n);
	vector<string> char_set(n);
	bool flag = false;
	rep(i, n)
	{
		string c;

		cin >> c >> cnt;
		if (cnt > 100)
			flag = true;
		cnt_set[i] = cnt;
		char_set[i] = c;
	}
	if (s.size() > 100 || flag)
	{
		cout << "Too Long" << endl;
		return 0;
	}
	rep(i, n)
	{
		rep(j, cnt_set[i])
			s.push_back(char_set[i]);
	}
	// rep(j, cnt)
	// 	s.push_back(c);
	rep(i, s.size())
	{
		cout << s[i];
	}
	cout << endl;
	return 0;
}