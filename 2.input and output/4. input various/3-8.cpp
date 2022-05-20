#include <bits/stdc++.h>
using namespace std;

int main()
{
	int	n;
	cin >> n;

	vector<string> s(n);
	string res;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		res += s[i];
	}
	cout << res.size() << endl;
	return 0;
}