#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	char c;
	cin >> c;

	int len = s.size();
	bool flag = false;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == c)
			flag = true;
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}