#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//在屏幕上写个乘法口诀表
int main()
{
	int i = 0;
	for (i = 1; i <=9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
//求10个数中的最大值
//int main()
//{
//	int arr[] = { 11,2,3,14,5,16,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d ", max);
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+...+1/99-1/100的值，并打印出来
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+=flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum=%1f\n", sum);
//	return 0;
//}
//数1~100的所有整数中出现9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;	
//	}
//	printf("\n1~100的所有整数中出现9的个数:%d \n ", count);
//	return 0;
//}
//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}	
//	}
//	printf("\n素数的个数为：%d\n", count);
//	return 0;
//}
//打印1000~2000之间的闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("1000~2000之间的闰年为：", i);
//	for (i = 1000; i <=2000; i++)
//	{
//		
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	
//		else if(i%400==0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\n闰年的个数为：%d\n", count);
//	return 0;
//}
//求两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//打印3的倍数
//int main()
//{
//	int i = 1;
//	int p = 0;
//	printf("1~100之间所有3的倍数为：\n", i);
//	while (i < 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//将三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
