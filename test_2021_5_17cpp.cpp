#define _CRT_SECURE_NO_WARNINGS 1

// ջ�ĵ��롢ѹ������
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV)
	{
		// ����һ��ջ��ģ����ջ��ջ�Ĺ���
		stack<int> st;
		int index_push = 0;
		int index_pop = 0;
		// ջ������Ҳ�ͽ�����
		while (index_push < pushV.size())
		{
			// ��ջ
			st.push(pushV[index_push]);
			// ��ջ
			while (!st.empty() && st.top() == popV[index_pop])
			{
				st.pop();
				++index_pop;
			}
			++index_push;
		}
		// ���ջΪ��������ȷ���������
		return st.empty();
	}
};
