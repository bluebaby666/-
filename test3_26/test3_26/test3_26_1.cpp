#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
//模拟用户登录场景，只允许输入三次密码 ，密码正确登陆成功，三次均错误，退出程序
int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//字符串的比较用库函数-strcmp
		{
			printf("登录成功！\n");
			break;
		}
		else
		{
			printf("密码错误！\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序！\n");
	return 0;
}
//演示多个字符从两端移动，向中间汇聚
int main()
{
	char arr1[] = "welcome to my own place!!!!!!";
	char arr2[] = "#############################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;

	}
	return 0;
}
//在一个有序数组中查找数字n
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到");
	}
	}
	return 0;
}
// 计算1~3的阶乘之和
int main()
{
	int  n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	
	printf("sum=%d\n", sum);
	return 0;
}