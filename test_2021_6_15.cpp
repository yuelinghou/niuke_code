#define _CRT_SECURE_NO_WARNINGS 1

// ������Ʊ�����ʱ��II
class Solution {
public:
	/**
	 *
	 * @param prices int����vector
	 * @return int����
	 */
	 // ̰���㷨�������飬�����������������
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

// ������Ʊ�����ʱ��
class Solution {
public:
	/**
	 *
	 * @param prices int����vector
	 * @return int����
	 */
	int maxProfit(vector<int>& prices)
	{
		int max_profit = 0;
		int min_price = prices[0];
		for (int i = 1; i < prices.size(); ++i)
		{
			// �㵽��ǰ���죬��С�ļ۸�
			min_price = min(min_price, prices[i]);
			// �㵽��ǰ���죬��������
			max_profit = max(max_profit, prices[i] - min_price);
		}
		return max_profit;
	}
};

// ���������������
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
	vector<int> inorderTraversal(TreeNode* root)
	{
		if (!root)
		{
			return vector<int>();
		}
		// ��ΪҪ�������飬����һ��ʼ���ȱ����ȴ�����ΪҪ�������飩
		vector<int> ret;
		_inorderTraversal(root->left, ret); //����������
		ret.push_back(root->val);          //������ڵ�
		_inorderTraversal(root->right, ret);//����������
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
