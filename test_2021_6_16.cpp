#define _CRT_SECURE_NO_WARNINGS 1

// 排列颜色
class Solution {
public:
	// 三指针法
	// 当前指针和zero_index从0开始，two_index从n-1开始
	// 当A[i]==1时不用管，直接++，因为1就要放在中间位置
	// 当A[i]==2时交换A[i]和A[two_index]，two_index--，但i不能动因为交换过来的可能是0或者2
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

// 合并两个有序的数组
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
		// 如果A放完了，那就说明B没有放完，继续放B
		// 如果是B放完了，那A就不用管了
		if (A_index == -1)
		{
			while (B_index >= 0)
			{
				A[total_index--] = B[B_index--];
			}
		}
	}
};

// 删除有序链表中的重复元素
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
	 * @param head ListNode类
	 * @return ListNode类
	 */
	 // 前后指针，遍历着往下走
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