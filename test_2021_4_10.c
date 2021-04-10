#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////思路：
////通过num&0101...01（0x55555555）的方式得到奇数位
////通过num&1010...10（0xaaaaaaaa）的方式得到偶数位
////将得到的奇数位左移一位，偶数位右移一位，原来的奇数位和偶数位的数就岔开了
////最后把二者|起来得到最终结果
//#define ODD_ENCHANGE_EVEN(num) (((num) & 0x55555555) << 1 | ((num) & 0xaaaaaaaa) >> 1)
//
//int main()
//{
//	printf("%d\n", ODD_ENCHANGE_EVEN(1));
//	return 0;
//}

//思路：
//把结构体的初始地址置为0
//此时结构体成员的地址强转为unsigned int的值就是结构体成员的偏移量

//#include<stdio.h>
//
//struct S
//{
//	char c;
//	int arr[5];
//};
//
//#define MY_OFFSETOF(structName,memberName) (unsigned int)&(((structName*)0)->memberName)
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", MY_OFFSETOF(struct S, arr));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, i = 0, k, a[100001] = { 0 }, max = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		if (max < k)
//		{
//			max = k;
//		}
//		a[k] = k;
//	}
//
//	for (i = 1; i <= max; i++)
//	{
//		if (a[i])
//			printf("%d ", a[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char s[8000] = { 0 };
//	gets(s);
//	long long int C = 0;
//	long long int CH = 0;
//	long long int CHN = 0;
//	char* str = s;
//	while (*str)
//	{
//		if (*str == 'C')
//		{
//			C++;
//		}
//		else if (*str == 'H')
//		{
//			CH += C;
//		}
//		else if (*str == 'N')
//		{
//			CHN += CH;
//		}
//		++str;
//	}
//	printf("%lld\n", CHN);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	printf("Practice makes perfect!\n");
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	double score1 = 0.0;
//	double score2 = 0.0;
//	double score3 = 0.0;
//	scanf("%lf%lf%lf", &score1, &score2, &score3);
//	printf("%.2lf %.2lf\n", score1 + score2 + score3, (score1 + score2 + score3) / 3);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &num);
//		if (max < num)
//		{
//			max = num;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int score = 0;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//	}
//	if ((sum / 3.0) < 60.0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 0 && score <= 100)
//	{
//		if (score >= 90 && score <= 100)
//		{
//			printf("A\n");
//		}
//		else if (score >= 80 && score <= 89)
//		{
//			printf("B\n");
//		}
//		else if (score >= 70 && score <= 79)
//		{
//			printf("C\n");
//		}
//		else if (score >= 60 && score <= 69)
//		{
//			printf("D\n");
//		}
//		else
//		{
//			printf("E\n");
//		}
//	}
//	else
//	{
//		printf("F\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int pep_num = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int single_score = 0;
//		int sum_score = 0;
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			scanf("%d", &single_score);
//			sum_score += single_score;
//		}
//		if (sum_score / 3.0 < 60.0)
//		{
//			pep_num++;
//		}
//	}
//	printf("%d\n", pep_num);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int max = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int score = 0;
//		scanf("%d", &score);
//		if (max < score)
//		{
//			max = score;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//#include<stdio.h>
//
//int Fac(int num)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret += Fac(i);
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include<stdio.h>
//
//int max3(int num1, int num2, int num3)
//{
//	int max = num1 > num2 ? num1 : num2;
//	if (max < num3)
//	{
//		max = num3;
//	}
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%.2lf\n", 1.0*max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	int x = 0;
//	int time = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			time++;
//		}
//	}
//	printf("%d\n", time);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;");
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int score[4] = { 0 };
//	double sum_score = 0.0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	sum_score = score[0] * 0.2 + score[1] * 0.1 + score[2] * 0.2 + score[3] * 0.5;
//	printf("%.1lf\n", sum_score);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int max_score = 0;
//	int score = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (max_score < score)
//		{
//			max_score = score;
//		}
//	}
//	printf("%d\n", max_score);
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//
//int isPrime(int num)
//{
//	if (num < 2)
//	{
//		return 0;
//	}
//	else if (num == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 2; i <= (int)sqrt(num); i++)
//		{
//			if (num%i == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		if (isPrime(i))
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//int main()
//{
//	int n = 0;
//	int arr[10001] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, sizeof(arr[0]), cmp);
//	int dest = 0;
//	int cur = 0;
//	int next = 1;
//	while (next < n)
//	{
//		if (arr[cur] == arr[next])
//		{
//			cur++;
//			next++;
//		}
//		else
//		{
//			arr[dest++] = arr[cur++];
//			next++;
//		}
//	}
//	arr[dest++] = arr[cur];
//	qsort(arr, dest, sizeof(arr[0]), cmp);
//	for (i = 0; i < dest; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i > j&&arr[i][j] != 0)
//			{
//				flag = 0;
//			}
//		}
//	}
//	if (flag)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//} ListNode;
//
//int main()
//{
//	ListNode* head = NULL;
//	ListNode* tail = NULL;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int num = 0;
//		scanf("%d", &num);
//		ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
//		newnode->val = num;
//		newnode->next = NULL;
//		if (!head)
//		{
//			head = tail = newnode;
//		}
//		else
//		{
//			tail->next = newnode;
//			tail = newnode;
//		}
//	}
//	int m = 0;
//	scanf("%d", &m);
//	ListNode* cur = head;
//	int arr[100] = { 0 };
//	int size = 0;
//	while (cur)
//	{
//		if (cur->val != m)
//		{
//			arr[size++] = cur->val;
//		}
//		cur = cur->next;
//	}
//	printf("%d\n", size);
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	while (head)
//	{
//		ListNode* nextnode = head->next;
//		free(head);
//		head = nextnode;
//	}
//	head = NULL;
//	tail = NULL;
//	return 0;
//}

