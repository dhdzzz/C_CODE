#define _CRT_SECURE_NO_WARNINGS 1 

//Xͼ��

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//����Ա�����ֳ���֣���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ�
//���ÿ���ƽ���ɼ�
//����������һ�У�����7��������0`100),����7���ɼ����ÿո�ָ�
//���������һ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ���������

//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int score = 0;
//	int i = 0;
//	int max = 0;
//	int min = 0;
//
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//
//	printf("%.2f\n", (sum - max - min) / 5.0);
//
//	return 0;
//}

//����·ݵ�����

//���ĳ��ĳ���ж���ǰ�죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣

//#include <stdio.h>
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		int day = days[m];
//		if (m == 2)
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//				day += 1;
//
//			printf("%d\n", day);
//	}
//	return 0;
//}

//�������в���һ����
//��������һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
//�������룺
//��һ������һ��������0<=N<=50��
//�ڶ�������N���������е������������ÿո�ָ��N������
//��������������Ҫ���в����һ������
//���������
//���Ϊһ�У�N+1���������е�����

#include <stdio.h>

int main()
{
	int arr[51] = { 0 };
	//����
	int n = 0;
	//n������
	scanf("%d", &n);
	int i = 0;
	//n����������
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����Ҫ���������
	int m = 0;
	scanf("%d", &m);

	//��������
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
			arr[i + 1] = arr[i];
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	//�������������С�����е��������
	if (i < 0)
		arr[0] = m;
	//���
	for (i = 0; i < n + 1; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}