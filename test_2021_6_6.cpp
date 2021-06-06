#define _CRT_SECURE_NO_WARNINGS 1

// ����һ�ε�����
class Solution {
public:
	/**
	 *
	 * @param A int����һά����
	 * @param n int A���鳤��
	 * @return int����
	 */
	 // 0����κ������κ���
	 // ��ͬ������������0
	int singleNumber(int* A, int n)
	{
		int ret = 0;
		for (int i = 0; i < n; ++i)
		{
			ret ^= A[i];
		}
		return ret;
	}
};

// ��������������
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
	 * @return int����
	 */
	 // �����ȵ��ڸ��ڵ��1+����������ȴ���Ǹ������
	int maxDepth(TreeNode* root)
	{
		if (!root)
		{
			return 0;
		}
		return max(maxDepth(root->left), maxDepth(root->right)) + 1;
	}
}; 

// �ж϶������Ƿ����
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
	 * @param p TreeNode��
	 * @param q TreeNode��
	 * @return bool������
	 */
	bool isSameTree(TreeNode* p, TreeNode* q)
	{
		// ���ǿ��������
		if (!p && !q)
		{
			return true;
		}
		// һ��������һ�����վͲ����
		if (!p || !q)
		{
			return false;
		}
		// ���������ǿ����������ǵĸ��ڵ��val����ȣ��������Ͳ����
		if (p->val != q->val)
		{
			return false;
		}
		// ���ڵ�val��ȣ���������Ҳ��ȣ���������������
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
};
