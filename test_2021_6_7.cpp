#define _CRT_SECURE_NO_WARNINGS 1

// 螺旋矩阵
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

// 求二叉树的前序遍历
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
	 * @param root TreeNode类
	 * @return int整型vector
	 */
	void _preorderTraversal(TreeNode* root, vector<int>& ret)
	{
		if (!root)
		{
			return;
		}
		// 1.根
		ret.push_back(root->val);
		// 2.左子树
		_preorderTraversal(root->left, ret);
		// 3.右子树
		_preorderTraversal(root->right, ret);
	}

	vector<int> preorderTraversal(TreeNode* root)
	{
		vector<int> ret;
		_preorderTraversal(root, ret);
		return ret;
	}
};

// 判断链表中是否有环
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
		// 空链表的话不算带环
		if (!head)
		{
			return false;
		}
		// 开始两个指针都在第一个节点
		ListNode* slow = head;
		ListNode* fast = head;
		// 快指针一次走两步
		// 慢指针一次走一步
		// 如果带环二者一定会相遇
		// 如果不带环，fast先走到空
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