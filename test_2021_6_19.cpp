#define _CRT_SECURE_NO_WARNINGS 1

// �ϲ���������
class Solution {
public:
	/**
	 *
	 * @param l1 ListNode��
	 * @param l2 ListNode��
	 * @return ListNode��
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

// ��·��
class Solution {
public:
	/**
	 *
	 * @param m int����
	 * @param n int����
	 * @return int����
	 */
	int uniquePaths(int m, int n)
	{
		// �ȶ������̣�����Ԫ�ض���ʼ��Ϊ0
		vector<vector<int>> board(m, vector<int>(n, 1));
		// �������̣�����ÿ��λ�õ�ֵ
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

// �������� - ii
class Solution {
public:
	/**
	 *
	 * @param n int����
	 * @return int����vector<vector<>>
	 */
	vector<vector<int> > generateMatrix(int n)
	{
		// n�Ƿ�����Ĵ���
		if (n <= 0)
		{
			return vector<vector<int>>();
		}
		// �������������ĸ�������±�
		int up = 0;
		int down = n - 1;
		int left = 0;
		int right = n - 1;
		// ��������ִӿ�ʼ
		int num = 1;
		// ��ʼ������Ԫ���ȶ�Ϊ
		vector<vector<int>> ret(n, vector<int>(n, 0));
		// ������������
		while (1)
		{
			// ����������
			for (int i = left; i <= right; ++i)
			{
				ret[up][i] = num++;
			}
			// ����������
			if (++up > down)
			{
				break;
			}
			for (int i = up; i <= down; ++i)
			{
				ret[i][right] = num++;
			}
			// ����������
			if (--right < left)
			{
				break;
			}
			for (int i = right; i >= left; --i)
			{
				ret[down][i] = num++;
			}
			// ����������
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




