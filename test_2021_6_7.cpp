#define _CRT_SECURE_NO_WARNINGS 1

// ��������
class Solution {
public:
	vector<int> spiralOrder(vector<vector<int> > &matrix)
	{
		if (!matrix.size())
		{
			return vector<int>();
		}
		int height = matrix.size();
		int width = matrix[0].size();
		int up = 0;
		int down = height - 1;
		int left = 0;
		int right = width - 1;
		vector<int> ret;
		while (1)
		{
			for (int i = left; i <= right; ++i)
			{
				ret.push_back(matrix[up][i]);
			}
			if (++up > down)
			{
				break;
			}
			for (int i = up; i <= down; ++i)
			{
				ret.push_back(matrix[i][right]);
			}
			if (--right < left)
			{
				break;
			}
			for (int i = right; i >= left; --i)
			{
				ret.push_back(matrix[i][down]);
			}
			if (--down < up)
			{
				break;
			}
			for (int i = down; i >= up; --i)
			{
				ret.push_back(matrix[i][left]);
			}
			if (++left > right)
			{
				break;
			}
		}
		return ret;
	}
};

// ���������ǰ�����
/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
	/**
	 *
	 * @param root TreeNode��
	 * @return int����vector
	 */
	void _preorderTraversal(TreeNode* root, vector<int>& ret)
	{
		if (!root)
		{
			return;
		}
		// 1.��
		ret.push_back(root->val);
		// 2.������
		_preorderTraversal(root->left, ret);
		// 3.������
		_preorderTraversal(root->right, ret);
	}

	vector<int> preorderTraversal(TreeNode* root)
	{
		vector<int> ret;
		_preorderTraversal(root, ret);
		return ret;
	}
};

// �ж��������Ƿ��л�
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	bool hasCycle(ListNode *head)
	{
		// ������Ļ��������
		if (!head)
		{
			return false;
		}
		// ��ʼ����ָ�붼�ڵ�һ���ڵ�
		ListNode* slow = head;
		ListNode* fast = head;
		// ��ָ��һ��������
		// ��ָ��һ����һ��
		// �����������һ��������
		// �����������fast���ߵ���
		while (fast&&fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
			{
				return true;
			}
		}
		return false;
	}
};