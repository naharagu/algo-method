#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	regex reg{R"(^[0-9a-zA-Z]+\@[0-9a-zA-Z]+\.[0-9a-zA-Z]{1,4})"};
	smatch	m;

	bool found = regex_search(s, m, reg);
	if (found)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}