#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
//ģ���û���¼������ֻ���������������� ��������ȷ��½�ɹ������ξ������˳�����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�ַ����ıȽ��ÿ⺯��-strcmp
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}
//��ʾ����ַ��������ƶ������м���
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
//��һ�����������в�������n
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���");
	}
	}
	return 0;
}
// ����1~3�Ľ׳�֮��
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