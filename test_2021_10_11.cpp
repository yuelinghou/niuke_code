// 组队竞赛
//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin>>n;
//    vector<int> v;
//    v.reserve(3*n);
//    for(int i = 0; i < 3*n; ++i)
//    {
//        cin>>v[i];
//    }
//    long long ret = 0;
//    sort(v.begin(), v.end());
//    for(int i = 3*n-2; i>=n; i-=2)
//    {
//        ret += v[i];
//    }
//    // 1 2 5 5 5 8
//    cout<<ret<<endl;
//    return 0;
//}

// 删除公共字符串
#include<string>
#include<iostream>
#include<unordered_set>
using namespace std;

void RemoveCommonCharacter(const string& s1, const string& s2)
{
  unordered_set<char> us;
  for(auto e : s2)
  {
    us.insert(e);
  }
  for(auto e : s1)
  {
    if(us.find(e) == us.end())
    {
      cout<<e;
    }
  }
  cout<<endl;
}

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    RemoveCommonCharacter(s1, s2);
    return 0;
}


















