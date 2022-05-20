#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;

	int s_len = s.size();
	int t_len = t.size();
	bool flag = false;
	for (int i = 0; i < s_len; i++)
	{
		if (s[i] == t[0])
		{
			flag = true;
			for (int j = 0; j < t_len; j++)
			{
				if (s[i + j] != t[j])
					flag = false;
			}
			if (flag)
				break;
		}
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}