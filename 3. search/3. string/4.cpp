#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] != t[i])
			count++;
	}
	cout << count << endl;
	return 0;
}