#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

/*
����˼·��
����������ҳ���ͬ�ڵ�����䣬Ȼ��ɾ�������е�����ֵ��ֱ����������������
*/
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		if (pHead == NULL || pHead->next == NULL)
//			return pHead;
//
//		struct ListNode* n0 = NULL;
//		struct ListNode* n1 = pHead;
//		struct ListNode* n2 = n1->next;
//		while (n2 != NULL)
//		{
//			//������ڽڵ㲻��ͬ������Ҫɾ�������½ڵ㣬����������
//			if (n1->val != n2->val)
//			{
//				n0 = n1;
//				n1 = n2;
//				n2 = n2->next;
//			}
//			else
//			{
//				//������ڽڵ���ͬ
//				//��n2ȥ�ҵ�һ������ͬ�Ľڵ�
//				while (n2 && n2->val == n1->val)
//				{
//					n2 = n2->next;
//				}
//				//�������ӣ����Ҫɾ���İ���ͷ�ڵ㣬�����ͷ�ڵ�
//				if (n0)
//					n0->next = n2;
//				else
//					pHead = n2;
//
//				// ɾ�����ظ��Ľڵ�
//				while (n1 != n2)
//				{
//					struct ListNode* next = n1->next;
//					free(n1);
//					n1 = next;
//				}
//				//���½ڵ�
//				n1 = n2;
//				if (n2)
//					n2 = n2->next;
//			}
//		}
//
//		return pHead;
//	}
//};

int main()
{
	/*char* p = "abcdef";*/
	const char* p = "abcdef";

	return 0;
}