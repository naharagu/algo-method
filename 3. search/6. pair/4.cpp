#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<string> s(n);
	for (int i = 0; i < n; i++)
		cin >> s[i];
	int flag = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] == s[j])
			{
				flag = true;
				break;
			}
		}
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}