#define _CRT_SECURE_NO_WARNINGS 1

// 买卖股票的最佳时机II
class Solution {
public:
	/**
	 *
	 * @param prices int整型vector
	 * @return int整型
	 */
	 // 贪心算法遍历数组，算相邻两天最大利润
	int maxProfit(vector<int>& prices)
	{
		int sum = 0;
		for (int i = 1; i < prices.size(); ++i)
		{
			if ((prices[i] - prices[i - 1]) > 0)
			{
				sum += (prices[i] - prices[i - 1]);
			}
		}
		return sum;
	}
};

// 买卖股票的最佳时机
class Solution {
public:
	/**
	 *
	 * @param prices int整型vector
	 * @return int整型
	 */
	int maxProfit(vector<int>& prices)
	{
		int max_profit = 0;
		int min_price = prices[0];
		for (int i = 1; i < prices.size(); ++i)
		{
			// 算到当前这天，最小的价格
			min_price = min(min_price, prices[i]);
			// 算到当前这天，最大的利润
			max_profit = max(max_profit, prices[i] - min_price);
		}
		return max_profit;
	}
};

// 二叉树的中序遍历
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
	vector<int> inorderTraversal(TreeNode* root)
	{
		if (!root)
		{
			return vector<int>();
		}
		// 因为要返回数组，所以一开始祖先必须先处理（因为要创建数组）
		vector<int> ret;
		_inorderTraversal(root->left, ret); //处理左子树
		ret.push_back(root->val);          //处理根节点
		_inorderTraversal(root->right, ret);//处理右子树
		return ret;
	}

private:
	void _inorderTraversal(TreeNode* root, vector<int>& ret)
	{
		if (!root)
		{
			return;
		}
		_inorderTraversal(root->left, ret);
		ret.push_back(root->val);
		_inorderTraversal(root->right, ret);
	}
};
