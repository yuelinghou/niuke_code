#define _CRT_SECURE_NO_WARNINGS 1


#include <vector>   
#include <string>
#include <iostream>
using namespace std;

class UnionFindSet
{
public:
	UnionFindSet(int n)
	{
		_ufs.resize(n, -1);
	}

	int FindRoot(int index)
	{
		while (_ufs[index] >= 0)
		{
			index = _ufs[index];
		}
		return index;
	}

	void Union(int x1, int x2)
	{
		int root1 = FindRoot(x1);
		int root2 = FindRoot(x2);
		if (root1 != root2)
		{
			_ufs[root1] += _ufs[root2];
			_ufs[root2] = root1;
		}
	}

	int GetSet()
	{
		int count = 0;
		for (auto e : _ufs)
		{
			if (e < 0)
			{
				++count;
			}
		}
		return count;
	}

private:
	vector<int> _ufs;
};

int main()
{
	int N = 0;
	cin >> N;
	UnionFindSet ufs(N);
	getchar();
	vector<vector<int>> vv(N, vector<int>(N));
	for (int i = 0; i < N; ++i)
	{
		string s;
		getline(cin, s);
		vector<int> tmp;
		for (auto e : s)
		{
			if (e == '0' || e == '1')
			{
				tmp.push_back(e - '0');
			}
		}
		for (int j = 0; j < N; ++j)
		{
			vv[i][j] = tmp[j];
			if (vv[i][j] == 1)
			{
				ufs.Union(i, j);
			}
		}
	}
	cout << ufs.GetSet() << endl;
	return 0;
}












