#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdio.h>
using namespace std;

struct Fraction
{
	long long _up;
	long long _down;
};

long long Gcd(long long a, long long b)
{
	long long tmp = 0;
	while (b)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

Fraction Reduction(Fraction result)
{
	if (result._down < 0)
	{
		result._up *= -1;
		result._down *= -1;
	}

	if (result._up == 0)
	{
		result._down = 1;
	}
	else
	{
		long long gcd = Gcd(abs(result._up), abs(result._down));
		result._up /= gcd;
		result._down /= gcd;
	}
	return result;
}

void PrintfFraction(Fraction result)
{
	Fraction tmp = Reduction(result);
	// 负数需要用括号括起来
	if (tmp._up < 0)
		cout << '(';

	if (tmp._down == 1)// 整数
		cout << tmp._up;
	else if (abs(tmp._up) > tmp._down)// 假分数
		cout << tmp._up / tmp._down << ' ' << abs(tmp._up) % tmp._down << '/' << tmp._down;
	else // 真分数
		cout << tmp._up << '/' << tmp._down;

	if (tmp._up < 0)
		cout << ')';
}

Fraction Add(const Fraction& a, const Fraction& b)
{
	Fraction result;
	result._up = a._up * b._down + b._up * a._down;
	result._down = a._down * b._down;
	return result;
}

Fraction Sub(const Fraction& a, const Fraction& b)
{
	Fraction result;
	result._up = a._up * b._down - b._up * a._down;
	result._down = a._down * b._down;
	return result;
}

Fraction Mul(const Fraction& a, const Fraction& b)
{
	Fraction result;
	result._up = a._up * b._up;
	result._down = a._down * b._down;
	return result;
}

Fraction Div(const Fraction& a, const Fraction& b)
{
	Fraction result;
	result._up = a._up * b._down;
	result._down = b._down * a._up;
	return result;
}

int main()
{
	Fraction a, b;
	scanf("%lld/%lld %lld/%lld", &a._up, &a._down, &b._up, &b._down);
	PrintfFraction(a); cout << " + "; PrintfFraction(b); cout << " = "; PrintfFraction(Add(a, b)); cout << endl;
	PrintfFraction(a); cout << " - "; PrintfFraction(b); cout << " = "; PrintfFraction(Sub(a, b)); cout << endl;
	PrintfFraction(a); cout << " * "; PrintfFraction(b); cout << " = "; 
	PrintfFraction(Mul(a, b)); cout << endl;
	PrintfFraction(a); cout << " / "; PrintfFraction(b); cout << " = ";
	if (b._up == 0)
	{
		cout << "Inf" << endl;
	}
	else
	{
		PrintfFraction(Div(a, b));
		cout << endl;
	}
	return 0;
}

