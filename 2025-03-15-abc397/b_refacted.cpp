#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
	string str;
	cin >> str;

	int cnt = 0;
	bool expecting_i = true;

	for (char c : str)
	{
		if ((expecting_i && c == 'i') || (!expecting_i && c == 'o'))
			expecting_i = !expecting_i;
		else
			cnt++;
	}
	if (str.back() != 'o')
		cnt++;
	cout << cnt << endl;
	return 0;
}