#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[j] >= a[i] && a[j] >= a[k])
					count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}