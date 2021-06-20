#define _CRT_SECURE_NO_WARNINGS 1

// 合并有序链表
class Solution {
public:
	/**
	 *
	 * @param l1 ListNode类
	 * @param l2 ListNode类
	 * @return ListNode类
	 */
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		ListNode* head = (ListNode*)malloc(sizeof(ListNode));
		ListNode* tail = head;
		while (l1&&l2)
		{
			if (l1->val < l2->val)
			{
				tail->next = l1;
				l1 = l1->next;
			}
			else
			{
				tail->next = l2;
				l2 = l2->next;
			}
			tail = tail->next;
		}
		tail->next = l1 == nullptr ? l2 : l1;
		return head->next;
	}
};

// 求路径
class Solution {
public:
	/**
	 *
	 * @param m int整型
	 * @param n int整型
	 * @return int整型
	 */
	int uniquePaths(int m, int n)
	{
		// 先定义棋盘，并把元素都初始化为0
		vector<vector<int>> board(m, vector<int>(n, 1));
		// 遍历棋盘，更新每个位置的值
		for (int i = 1; i < m; ++i)
		{
			for (int j = 1; j < n; ++j)
			{
				board[i][j] = board[i - 1][j] + board[i][j - 1];
			}
		}
		return board[m - 1][n - 1];
	}
};

// 螺旋矩阵 - ii
class Solution {
public:
	/**
	 *
	 * @param n int整型
	 * @return int整型vector<vector<>>
	 */
	vector<vector<int> > generateMatrix(int n)
	{
		// n非法情况的处理
		if (n <= 0)
		{
			return vector<vector<int>>();
		}
		// 定义上下左右四个方向的下标
		int up = 0;
		int down = n - 1;
		int left = 0;
		int right = n - 1;
		// 放入的数字从开始
		int num = 1;
		// 初始化矩阵元素先都为
		vector<vector<int>> ret(n, vector<int>(n, 0));
		// 螺旋遍历矩阵
		while (1)
		{
			// 从左上往右
			for (int i = left; i <= right; ++i)
			{
				ret[up][i] = num++;
			}
			// 从右上往下
			if (++up > down)
			{
				break;
			}
			for (int i = up; i <= down; ++i)
			{
				ret[i][right] = num++;
			}
			// 从右下往左
			if (--right < left)
			{
				break;
			}
			for (int i = right; i >= left; --i)
			{
				ret[down][i] = num++;
			}
			// 从左下往上
			if (--down < up)
			{
				break;
			}
			for (int i = down; i >= up; --i)
			{
				ret[i][left] = num++;
			}
			if (++left > right)
			{
				break;
			}
		}
		return ret;
	}
};




