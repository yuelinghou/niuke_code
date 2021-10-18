#define _CRT_SECURE_NO_WARNINGS 1

// Fibonacci���� 
#include <iostream>    
using namespace std;

int LastToFibonacci(int digit)
{
	int left = 0;
	int right = 1;
	while (digit > right)
	{
		int tmp = right;
		right += left;
		left = tmp;
	}
	return min(digit - left, right - digit);
}

int main()
{
	int digit = 0;
	cin >> digit;
	cout << LastToFibonacci(digit) << endl;
	return 0;
}

// �Ϸ����������ж�    
class Parenthesis {
public:
	bool chkParenthesis(string A, int n)
	{
		stack<char> s;
		for (auto e : A)
		{
			if (e == '(')
			{
				s.push(e);
			}
			else if (e == ')')
			{
				if (s.empty())
				{
					return false;
				}
				else
				{
					s.pop();
				}
			}
			else
			{
				return false;
			}
		}
		return s.empty();
	}
};
