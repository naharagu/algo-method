#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int len = s.size();
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == s[i + 1])
			count++;
	}
	cout << count << endl;
	return 0;
}