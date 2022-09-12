#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////四十三、完成
//void sum(int a)
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	i = a;
//	for (n = 0; n < 5; n++)
//	{
//		sum = sum + a;
//		a = a * 10 + i;
//	}
//	printf("%d", sum);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	sum(a);
//	return 0;
//}
//四十四、完成
int num(int i)
{
	int num = 0;
	while (i != 0)
	{
		i /= 10;
		num++;
	}
	return num;
}
int pow(int a, int ret)
{
	if (ret == 0)
		return 1;
	else
		return a*pow(a, ret - 1);
}
int judge(int i, int ret)
{
	int n = 0;
	int arr[100000] = { 0 };
	while (i != 0)
	{
		arr[n] = i % 10;
		i /= 10;
		n++;
	}
	for (i = 0, n = 0; n < ret; n++)
	{
		i += pow(arr[n], ret);
	}
	return i;
}
int main()
{
	int i = 0;
	int ret = 0;
	for (i = 1; i <= 100000; i++)
	{
		//判断有几位
		int ret = num(i);
		//判断
		if (i == judge(i, ret))
			printf("%d ", i);
	}
	return 0;
}