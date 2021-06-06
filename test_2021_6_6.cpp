#define _CRT_SECURE_NO_WARNINGS 1

// 出现一次的数字
class Solution {
public:
	/**
	 *
	 * @param A int整型一维数组
	 * @param n int A数组长度
	 * @return int整型
	 */
	 // 0异或任何数的任何数
	 // 相同的两个数异或得0
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

// 二叉树的最大深度
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
	 * @return int整型
	 */
	 // 最大深度等于根节点的1+左右子树深度大的那个的深度
	int maxDepth(TreeNode* root)
	{
		if (!root)
		{
			return 0;
		}
		return max(maxDepth(root->left), maxDepth(root->right)) + 1;
	}
}; 

// 判断二叉树是否相等
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
	 * @param p TreeNode类
	 * @param q TreeNode类
	 * @return bool布尔型
	 */
	bool isSameTree(TreeNode* p, TreeNode* q)
	{
		// 都是空树算相等
		if (!p && !q)
		{
			return true;
		}
		// 一个空树另一个不空就不相等
		if (!p || !q)
		{
			return false;
		}
		// 两个都不是空树，但他们的根节点的val不相等，两棵树就不相等
		if (p->val != q->val)
		{
			return false;
		}
		// 根节点val相等，两颗子树也相等，最后两棵树才相等
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
};
