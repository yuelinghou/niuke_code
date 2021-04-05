//#define _CRT_SECURE_NO_WARNINGS 1
//
///*
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};*/
//class PalindromeList {
//public:
//	bool chkPalindrome(ListNode* A)
//	{
//		int flag = 1;
//		ListNode* newhead = nullptr;
//		ListNode* cur = A;
//		while (cur)
//		{
//			ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
//			newnode->val = cur->val;
//			newnode->next = newhead;
//			newhead = newnode;
//			cur = cur->next;
//		}
//		ListNode* destoryflag = newhead;
//		while (A)
//		{
//			if (A->val != newhead->val)
//			{
//				flag = 0;
//				break;
//			}
//			A = A->next;
//			newhead = newhead->next;
//		}
//		if (destoryflag)
//		{
//			ListNode* tmp = destoryflag;
//			free(tmp);
//			destoryflag = destoryflag->next;
//		}
//		return flag == 1 ? true : false;
//	}
//};
//
///*
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};*/
//
//class Partition {
//public:
//	ListNode* partition(ListNode* pHead, int x)
//	{
//		if (!pHead)
//		{
//			return pHead;
//		}
//		ListNode* lesshead = (ListNode*)malloc(sizeof(ListNode));
//		lesshead->next = NULL;
//		ListNode* lesstail = lesshead;
//		ListNode* greaterhead = (ListNode*)malloc(sizeof(ListNode));
//		greaterhead->next = NULL;
//		ListNode* greatertail = greaterhead;
//		while (pHead)
//		{
//			if (pHead->val < x)
//			{
//				lesstail->next = pHead;
//				lesstail = lesstail->next;
//				pHead = pHead->next;
//			}
//			else
//			{
//				greatertail->next = pHead;
//				greatertail = greatertail->next;
//				pHead = pHead->next;
//			}
//		}
//		greatertail->next = NULL;
//		lesstail->next = greaterhead->next;
//		ListNode* newhead = lesshead->next;
//		free(lesshead);
//		free(greaterhead);
//		return newhead;
//	}
//};

