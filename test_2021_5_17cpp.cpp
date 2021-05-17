#define _CRT_SECURE_NO_WARNINGS 1

// 栈的弹入、压出序列
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV)
	{
		// 建立一个栈，模拟入栈出栈的过程
		stack<int> st;
		int index_push = 0;
		int index_pop = 0;
		// 栈入完了也就结束了
		while (index_push < pushV.size())
		{
			// 入栈
			st.push(pushV[index_push]);
			// 出栈
			while (!st.empty() && st.top() == popV[index_pop])
			{
				st.pop();
				++index_pop;
			}
			++index_push;
		}
		// 最后栈为空序列正确，否则错误
		return st.empty();
	}
};
