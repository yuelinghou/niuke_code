#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int date)
//	{
//		_year = date / 10000;
//		_month = date % 10000 / 100;
//		_day = date % 100;
//	}
//
//	static int Get_Month_day(int year, int month)
//	{
//		int Month_day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) && month == 2)
//		{
//			return 29;
//		}
//		return Month_day[month];
//	}
//
//	Date& operator++()
//	{
//		_day++;
//		if (_day == Get_Month_day(_year, _month) + 1)
//		{
//			_month++;
//			if (_month == 13)
//			{
//				_year++;
//				_month = 1;
//			}
//			_day = 1;
//		}
//		return *this;
//	}
//
//	bool operator==(Date& d)
//	{
//		return _year == d._year
//			&&_month == d._month
//			&&_day == d._day;
//	}
//
//	bool operator!=(Date& d)
//	{
//		return !(*this == d);
//	}
//
//	bool operator>(Date& d)
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year&&_month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year&&_month == d._month&&_day > d._day)
//		{
//			return true;
//		}
//		return false;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	int date1 = 0;
//	int date2 = 0;
//	while (cin >> date1 >> date2)
//	{
//		Date d1(date1);
//		Date d2(date2);
//		int count = 0;
//		if (d1 > d2)
//		{
//			while (d1 != d2)
//			{
//				++d2;
//				count++;
//			}
//		}
//		else
//		{
//			while (d1 != d2)
//			{
//				++d1;
//				count++;
//			}
//		}
//		cout << count+1;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//	void Set_Number(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	static int Get_Month_Day(int year, int month)
//	{
//		int Month_Day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month == 2)
//		{
//			return 29;
//		}
//		return Month_Day[month];
//	}
//
//	Date& operator++()
//	{
//		++_day;
//		if (_day == Get_Month_Day(_year, _month) + 1)
//		{
//			++_month;
//			if (_month == 13)
//			{
//				++_year;
//				_month = 1;
//			}
//			_day = 1;
//		}
//		return *this;
//	}
//
//	void Print()
//	{
//		printf("%.4d-%.2d-%.2d\n", _year, _month, _day);
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	Date* pd = new Date[n];
//	int year = 0;
//	int month = 1;
//	int day = 1;
//	int count = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> year >> month >> day >> count;
//		pd[i].Set_Number(year, month, day);
//		while (count--)
//		{
//			++pd[i];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		pd[i].Print();
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year)
//		:_year(year)
//		, _month(1)
//		, _day(1)
//	{}
//
//	static int Get_Month_Day(int year, int month)
//	{
//		int Month_Day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month == 2)
//		{
//			return 29;
//		}
//		return Month_Day[month];
//	}
//
//	Date& operator++()
//	{
//		++_day;
//		if (_day == Get_Month_Day(_year, _month) + 1)
//		{
//			++_month;
//			if (_month == 13)
//			{
//				++_year;
//				_month = 1;
//			}
//			_day = 1;
//		}
//		return *this;
//	}
//
//	void Print()
//	{
//		printf("%.4d-%.2d-%.2d", _year, _month, _day);
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	int year = 0;
//	int day = 0;
//	while (cin >> year >> day)
//	{
//		Date d(year);
//		while (--day)
//		{
//			++d;
//		}
//		d.Print();
//	}
//	return 0;
//}