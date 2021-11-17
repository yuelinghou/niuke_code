2000 1 1 2000 1 1
2000 1 2 2000 1 2
2000 1 3 2000 1 3
2000 1 4 2000 1 4
2000 1 5 2000 1 5
2000 1 6 2000 1 6
2000 1 7 2000 1 7
2000 1 8 2000 1 8
2000 1 9 2000 1 9
2000 1 10 2000 1 10
2000 1 11 2000 1 11
2000 1 12 2000 1 12
2000 1 13 2000 1 13
2000 1 14 2000 1 14
2000 1 15 2000 1 15
2000 1 16 2000 1 16
2000 1 17 2000 1 17
2000 1 18 2000 1 18
2000 1 19 2000 1 19
2000 1 20 2000 1 20
2000 1 21 2000 1 21
2000 1 22 2000 1 22
2000 1 23 2000 1 23
2000 1 24 2000 1 24
2000 1 25 2000 1 25
2000 1 26 2000 1 26
2000 1 27 2000 1 27
2000 1 28 2000 1 28
2000 1 29 2000 1 29
2000 1 30 2000 1 30
2000 1 31 2000 1 31
2000 1 1 2000 1 31
2000 2 1 2000 2 28
2000 2 1 2000 2 29
2000 3 1 2000 3 31
2000 4 1 2000 4 30
2000 5 1 2000 5 31
2000 6 1 2000 6 30
2000 7 1 2000 7 31
2000 8 1 2000 8 31
2000 9 1 2000 9 30
2000 10 1 2000 10 31
2000 11 1 2000 11 30
2000 12 1 2000 12 31
2001 1 1 2001 1 31
2001 2 1 2001 2 28
2001 3 1 2001 3 31
2001 4 1 2001 4 30
2001 5 1 2001 5 31
2001 6 1 2001 6 30
2001 7 1 2001 7 31
2001 8 1 2001 8 31
2001 9 1 2001 9 30
2001 10 1 2001 10 31
2001 11 1 2001 11 30
2001 12 1 2001 12 31
2004 1 1 2004 1 31
2004 2 1 2004 2 28
2004 2 1 2004 2 29
2004 3 1 2004 3 31
2004 4 1 2004 4 30
2004 5 1 2004 5 31
2004 6 1 2004 6 30
2004 7 1 2004 7 31
2004 8 1 2004 8 31
2004 9 1 2004 9 30
2004 10 1 2004 10 31
2004 11 1 2004 11 30
2004 12 1 2004 12 31
2100 1 1 2100 1 31
2100 2 2 2100 2 28
2100 2 3 2100 2 29
2100 3 4 2100 3 31
2100 4 5 2100 4 30
2100 5 6 2100 5 31
2100 6 7 2100 6 30
2100 7 8 2100 7 31
2100 8 9 2100 8 31
2100 9 10 2100 9 30
2100 10 11 2100 10 31
2100 11 12 2100 11 30
2100 12 13 2100 12 31
2000 1 1 2999 12 31

// 斐波那契凤尾
//#include <vector>    
//#include <iostream>    
//using namespace std;    
//    
//int main()    
//{    
//  vector<int> fib(100001, 1);    
//  // 题目要求如果超过了六位数，就只输出后六位即可    
//  // 那么如果超过了六位数，我们只用后六位数运算即可                                                                   
//  for(int i = 2; i <= 100000; ++i)             
//  {                                            
//    fib[i] = (fib[i-1]%1000000 + fib[i-2]%1000000)%1000000;    
//  }                        
//  int num = 0;             
//  while(cin>>num)            
//  {                          
//    // 取模6位之后可能前几位为0，输出时要补齐前面的0
//    // 比如1054321取模后6位后得到54321，应该输出054321才对
//    // 斐波那契数列从第29个数字开始就超过6位了
//    printf((num < 29 ? "%d\n" : "%06d\n"),fib[num]);    
//  }                        
//  return 0;                
//} 

// 淘宝网店
//#include <vector>
//#include <iostream>
//using namespace std;
//
//bool IsPrime(int num)
//{
//  if(num <= 1)
//  {
//    return false;
//  }
//  for(int i = 2; i*i <= num; ++i)
//  {
//    if(num%i == 0)
//    {
//      return false;
//    }
//  }
//  return true;
//}
//
//class Date 
//{
//  public:
//    // 传入年、月、日构造一个日期类对象
//    Date(int year, int month, int day)
//      :_year(year)
//      ,_month(month)
//      ,_day(day)
//    {}
//    
//    // <运算符重载
//    bool operator<(const Date& d) const 
//    {
//      if(_year < d._year)
//      {
//        return true;
//      }
//      else if(_year == d._year && _month < d._month)
//      {
//        return true;
//      }
//      else if(_year == d._year && _month == d._month && _day < d._day)
//      {
//        return true;
//      }
//      return  false;
//    }
//    
//    // ==运算符重载
//    bool operator==(const Date& d) const
//    {
//      return
//           _year==d._year 
//        && _month==d._month 
//        && _day==d._day;
//    }
//    
//    // !=运算符重载
//    bool operator!=(const Date& d) const
//    {
//      return !(*this == d);
//    }
//
//    // <=运算符重载
//    bool operator<=(const Date& d)
//    {
//      return (*this<d) || (*this==d);
//    }
//
//    // 获取日期类对象的月份,用来判断该月份是不是素数
//    int GetMonth()
//    {
//      return _month;
//    }
//
//    // ++运算符重载
//    Date& operator++()
//    {
//      ++_day;
//      if(_day == GetMonthDay(_year, _month)+1)
//      {
//        _day = 1;
//        ++_month;
//        if(_month == 13)
//        {
//          _month = 1;
//          ++_year;
//        }
//      }
//      return *this;
//    }
//
//  private:
//    // 获取某年的某月有多少天
//    int GetMonthDay(int year, int month)
//    {
//      int monthDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//      if(month == 2 && ((year%4==0 && year%100!=0) || year%400==0))
//      {
//        return 29;
//      }
//      return monthDay[month];
//    }
//
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//  int year1 = 0;
//  int month1 = 0;
//  int day1 = 0;
//  int year2 = 0;
//  int month2 = 0;
//  int day2 = 0;
//  while(cin>>year1>>month1>>day1>>year2>>month2>>day2)
//  {
//    Date d1(year1, month1, day1);
//    Date d2(year2, month2, day2);
//    int money = 0;
//    // 一天天的累加
//    do 
//    {
//      if(IsPrime(d1.GetMonth()))
//      {
//        money += 1;
//      }
//      else 
//      {
//        money += 2;
//      }
//      ++d1;
//    }while(d1 <= d2);
//    cout<<money<<endl;
//  }
//  return 0;
//}
