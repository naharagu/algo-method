#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string s)
{
	int len = s.size();
	bool flag = true;
	for (int i = 0; i <= len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			flag = false;
	}
	return (flag);
}

int main()
{
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; i++)
		cin >> s[i];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (check_palindrome(s[i]))
			count++;
	}
	cout << count << endl;
	return 0;
}