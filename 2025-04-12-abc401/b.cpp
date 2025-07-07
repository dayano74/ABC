#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string opratioin;
	int status;
	status = 0;
	int error_cnt;
	error_cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> opratioin;
		if (status == 0 and opratioin == "private")
			error_cnt += 1;
		if (status == 0 and opratioin == "login")
			status = 1;
		if (status == 1 and opratioin == "logout")
			status = 0;
		// printf("error_cnt = %d\n", error_cnt);
		// printf("status = %d\n", status);
	}
	cout << error_cnt << endl;
}