#define _CRT_SECURE_NO_WARNINGS 1

// ������ɫ
class Solution {
public:
	// ��ָ�뷨
	// ��ǰָ���zero_index��0��ʼ��two_index��n-1��ʼ
	// ��A[i]==1ʱ���ùܣ�ֱ��++����Ϊ1��Ҫ�����м�λ��
	// ��A[i]==2ʱ����A[i]��A[two_index]��two_index--����i���ܶ���Ϊ���������Ŀ�����0����2
	void sortColors(int A[], int n)
	{
		int zero_index = 0;
		int i = 0;
		int two_index = n - 1;
		while (i < two_index + 1)
		{
			if (A[i] == 0)
			{
				swap(A[i++], A[zero_index++]);
			}
			else if (A[i] == 1)
			{
				++i;
			}
			else if (A[i] == 2)
			{
				swap(A[i], A[two_index--]);
			}
		}
	}
};

// �ϲ��������������
class Solution {
public:
	void merge(int A[], int m, int B[], int n)
	{
		int total_index = m + n - 1;
		int A_index = m - 1;
		int B_index = n - 1;
		while (A_index >= 0 && B_index >= 0)
		{
			if (A[A_index] > B[B_index])
			{
				A[total_index--] = A[A_index--];
			}
			else
			{
				A[total_index--] = B[B_index--];
			}
		}
		// ���A�����ˣ��Ǿ�˵��Bû�з��꣬������B
		// �����B�����ˣ���A�Ͳ��ù���
		if (A_index == -1)
		{
			while (B_index >= 0)
			{
				A[total_index--] = B[B_index--];
			}
		}
	}
};

// ɾ�����������е��ظ�Ԫ��
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
	/**
	 *
	 * @param head ListNode��
	 * @return ListNode��
	 */
	 // ǰ��ָ�룬������������
	ListNode* deleteDuplicates(ListNode* head)
	{
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}
		ListNode* prev = head;
		ListNode* cur = head->next;
		while (cur)
		{
			if (prev->val == cur->val)
			{
				ListNode* next = cur->next;
				delete cur;
				prev->next = next;
				cur = next;
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		}
		return head;
	}
};