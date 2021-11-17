// 最大子序和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) 
//    {
//        int ret = nums[0];
//        int cur = nums[0];
//        for(int i = 1; i < nums.size(); ++i)
//        {
//            cur = nums[i] + max(cur, 0);
//            if(cur > ret)
//            {
//                ret = cur;
//            }
//        }
//        return ret;
//    }
//};

// 分解因数
//#include <iostream>
//using namespace std;
//
//int main()
//{
//  int num = 0;
//  while(cin>>num)
//  {
//    // 为了满足题目要求的格式输出，我们单独处理第一个输出和最后一个的输出
//    cout<<num<<" = ";
//    for(int i = 2; i < num; ++i)
//    {
//      while(num%i == 0 && i != num)
//      {
//        cout<<i<<" * ";
//        num /= i;
//      }
//    }
//    cout<<num<<endl;
//  }
//  return 0;
//}

// 美国节日
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int GetWeek(int year, int month, int day)
//{
//  if(month == 1 || month == 2)
//  {
//    --year;
//    month += 12;
//  }
//  int century = year / 100;
//  year %= 100;
//  int week = year + (year / 4) + (century / 4) - 2 * century + 26 * (month + 1) / 10 + day - 1;
//  week = (week % 7 + 7) % 7;
//  if (week == 0)
//  {
//      week = 7;
//  }
//  return week;
//}
//
//int GetDay(int year, int month, int count, int dirWeek)
//{
//  int week = GetWeek(year, month, 1);
//  return 7*(count-1) + (dirWeek+7-week)%7+1;
//}
//
//// 元旦节(1月1日)
//void New_Year_Day(int year)
//{
//  printf("%d-%02d-%02d\n", year, 1, 1);
//}
//
//// 马丁·路德金纪念日(1月的第三个星期一)
//void Martin_Luther_King_Day(int year)
//{
//  int day = GetDay(year, 1, 3, 1);
//  printf("%d-%02d-%02d\n", year, 1, day);
//}
//
//// 总统节(2月的第三个星期一)
//void President_Day(int year)
//{
//  int day = GetDay(year, 2, 3, 1);
//  printf("%d-%02d-%02d\n", year, 2, day);
//}
//
//// 阵亡将士纪念日(5月的最后一个星期一)
//void Memorial_Day(int year)
//{
//  int week = GetWeek(year, 6, 1);
//  int day = 31 - (week==1?6:(week-2));
//  printf("%d-%02d-%02d\n", year, 5, day);
//}
//
//// 美国国庆(7月4日)
//void Independence_Day(int year)
//{
//  printf("%d-%02d-%02d\n", year, 7, 4);
//}
//
//// 劳动节(9月的第一个星期一)
//void Labor_Day(int year)
//{
//  int day = GetDay(year, 9, 1, 1);
//  printf("%d-%02d-%02d\n", year, 9, day);
//}
//
//// 感恩节(11月的第四个星期四)
//void Thanks_Giving_Day(int year)
//{
//  int day = GetDay(year, 11, 4, 4);
//  printf("%d-%02d-%02d\n", year, 11, day);
//}
//
//// 圣诞节(12月25日)
//void Christmas(int year)
//{
//  printf("%d-%02d-%02d\n", year, 12, 25);
//}
//
//void USHoliday(int year)
//{
//  New_Year_Day(year);
//  Martin_Luther_King_Day(year);
//  President_Day(year);
//  Memorial_Day(year);
//  Independence_Day(year);
//  Labor_Day(year);
//  Thanks_Giving_Day(year);
//  Christmas(year);
//}
//
//int main()
//{
//  int year = 0;
//  while(cin>>year)
//  {
//    USHoliday(year);
//    cout<<endl;
//  }
//  return 0;
//}



