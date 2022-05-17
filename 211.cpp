#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<int> a(n);
	int max = 0;
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
			flag = i;
		}
	}
	cout << flag << endl;
	return 0;
}