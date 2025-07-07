#include <bits/stdc++.h>
using namespace std;

int main()
{
	int box_count, ball_count;
	cin >> box_count >> ball_count;

	vector<int> boxes(box_count, 0);
	vector<int> result;

	for (int ball = 0; ball < ball_count; ball++)
	{
		int idx;
		cin >> idx;

		if (idx == 0)
		{
			int min_val = boxes[0];
			int min_idx = 0;
			for (int j = 0; j < box_count; j++)
			{
				if (boxes[j] < min_val)
				{
					min_val = boxes[j];
					min_idx = j;
				}
			}
			boxes[min_idx] += 1;
			result.push_back(min_idx + 1);
		}
		else
		{
			boxes[idx - 1] += 1;
			result.push_back(idx);
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i < result.size() - 1)
			cout << " ";
	}
	cout << endl;

	return 0;
}