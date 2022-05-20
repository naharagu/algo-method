#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int len = s.size();
	bool flag = true;
	for (int i = 0; i <= len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			flag = false;
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}