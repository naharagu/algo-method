#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n, v;
	cin >> n >> v;

	vector<int> a(n);
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == v)
			flag = true;
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}