#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;
	for (const auto& e2 : s2)
	{
		for (string::iterator it = s1.begin(); it != s1.end(); )
		{
			if (*it == e2)
			{
				s1.erase(it);
			}
			else
			{
				++it;
			}
		}
	}
	cout << s1 << endl;
	return 0;
}
