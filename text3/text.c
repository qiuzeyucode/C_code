#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
////三、成功
//int main()
//{
//	int a = 0;
//	//int*p = &a;
//	//*p = 10;
//	scanf_s("%d",&a);
//	printf("%d", a);
//	return 0;
//}
////四、成功 
//int main()
//{   
//	int i = 1;
//	while (i <= 10)
//	{   
//		if (i == 5)
//			printf("哈哈");	
//		else 
//           i++;   
//	}
//	return 0;
//}
////五、成功
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}
////六、成功
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	while (i<10);
//	    
//	return 0;
//}
////七、成功且效率极低
//int main()
//{
//	int n = 1;
//	int i = 1;
//	int x = 1;
//	int y = 1;
//	printf("需要求的阶乘是");
//	scanf_s("\n%d",&n);
//	if (n % 2 == 0)
//	{
//		for (i = 1; i < n ; i+=2)
//		{
//			x = x*i*(i + 1);
//		}
//		printf("阶乘为%d\n", x);
//	}
//	else
//	{
//		for (i = 2; i < n; i += 2)
//		{
//			y = y*i*(i + 1);
//		}
//		printf("阶乘为%d\n", y);
//	}
//	return 0;
//}
////八、成功啊啊啊啊
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d", ret);
//	return 0;
//}
////九、成功效率低
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int s = 1;
//	int sum = 0;
//	scanf_s("%d", &s);
//	for (n = 1; n <= s; n++)
//	{
//		ret = 1;
//注意:进入第二重循环时需要将ret初始化否则ret值保留会累积相乘
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
////十、成功效率高
// int main()
//{	int n = 0;
//	int ret = 1;
//	int s = 1;
//	int sum = 0;
//	scanf_s("%d", &n);
//	scanf_s("%d", &s);
//	for (; n <= s; n++)
//		{
//			ret = ret*n;
//			sum = sum + ret;
//		}
//	printf("sum=%d\n", sum);
//	return 0;
//}
////十一、成功
//int main()
//{
//	int k = 0;
//	scanf_s("%d", &k);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}	
////十二、成功
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "good good study,day day up!!!";
//	char arr2[] = "#############################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(600);
//		system("cls");
//		left++;
//		right--;
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
////十三、成功
//int main()
//{
//	int year = 0;
//	int num = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0) // if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
//		{
//			printf("%d ", year);
//			num++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			num++;
//		}
//	}
//	printf("\nnum=%d", num);
//	return 0;
//}
////十四、成功
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		//跳出次循环有两种情况
//		//一、满足模为0 break
//		//二、到循环结束退出
//		if (j == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//优化后
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
////十五、成功
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int x = 0;
//	scanf_s("%d", &i);
//	for (a = 1; a <= i; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			x = a*b;
//			printf("%d*%d=%-2d ", a,b,x);
//		}
//		printf("\n");
//	}
//	return 0;
//}
////十六、完成
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf_s("%d", &i);
//	scanf_s("%d", &j);
//	int n = 0;
//	while (i%j)
//	{
//		n = i%j;
//		i = j;
//		j = n;
//	}
//	printf("%d", j);
//	return 0;
//}
////十七、完成
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 10, 6, 8, 9, 7 };
//    int i = 0;
//	int max = arr[0];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("最大的数为:%d", max);
//	return 0;
//}
////十八、完成
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int n = 0;
//	scanf_s("%d%d%d", &a,&b,&c);
//	if (c > a)
//	{
//		n = c;
//		c = a;
//		a = n;
//	}
//	if (b > a)
//	{
//		n = a;
//		a = b;
//		b = n;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
////十九、完成
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf_s("%d%d", &i,&n);
//	double num = 0.0;
//	int k = 1;
//	for (i; i <= n; i++)
//	{
//		num += k*1.0 / i;
//		k = -k;
//	}
//	printf("%lf", num);
//	return 0;
//}
////二十、完成
//#include<stdlib.h>
//#include<time.h>
//void mean()
//{
//	printf("猜数字游戏\n");
//	printf("**********************\n");
//	printf("****    1.play    ****\n");
//	printf("****    0.exit    ****\n");
//	printf("**********************\n");
//}
//void game()
//{
//	printf("游戏开始\n");
//	printf("输入猜测");
//	//1,创建任意数
//	int ret = 0;
//    ret = rand()%100+1;
//	//printf("%d", ret);
//	//2,游戏循环
//	while (1)
//	{
//		int guess = 0;
//		scanf_s("%d", &guess);
//		if (ret < guess)
//			printf("猜大了\n");
//		else if (ret>guess)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		mean();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			   game();
//			   break;
//		case 0:
//			   printf("退出游戏\n");
//			   break;
//		default:
//			   printf("输入错误\n");
//			   break;
//		}
//	} while (input);
//	return 0;
//}
////二十一、完成（冒泡排序）
//int main()
//{
//	int arr[] = {1,2,3,4,8,6,7,5,10,9};
//	int i = 0;//总循环次数，为sz-1次
//	int j = 0;//次循环次数，为sz-i次且代表数组下标
//	int n = 0;//临时变量
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz-1; i++)
//	{
//		for (j = 0; j <= sz -1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				n = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = n;
//			}
//		}
//	}
//	for (j = 0; j <= sz-1; j++)
//		printf("%d ",arr[j]);
//	return 0;
//}
////二十二、完成
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");	
//	while (1)
//	{
//		printf("你的电脑将于一分钟内关机，输入“好樊鸭”取消关机。\n请输入>:");
//	    scanf("%s", input);
//		if (strcmp(input, "好樊鸭") == 0)
//		{
//			system("shutdown -a");
//			printf("取消成功\n");
//			break;
//		}
//	}
//	return 0;
//}
////二十三、完成
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9 )
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
////二十四、完成
//void Swap(int*pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
////二十五、完成
//#include<math.h>
//int judge(int j)
//{
//	int n = 0;
//	for (n = 2; n <= sqrt(j); n++)
//	{
//		if (j%n == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (judge(i) == 1)
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}
////二十六、完成
//int leap(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0 && n % 3200 != 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (leap(year == 0))
//		printf("不是闰年\n");
//	else
//		printf("是闰年\n");
//	return 0;
//}
////二十七、完成（二分查找）
//int find(int arr[],int j,int sz)
//{
//	int n = 0;
//	int left = 0;
//	int right =sz - 1;
//	while (left <= right)
//	{	
//		int mid = (left + right) / 2;
//		if (j < arr[mid])
//	        right = mid - 1;
//		else if (j>arr[mid])
//			left = mid + 1;
//		else
//			return mid;
//	}
//    return -1; 
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	scanf("%d", &i);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = find(arr, i,sz);
//	if ( ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为：%d\n",ret);
//    return 0;
//}
////二十八、完成
//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
////二十九、完成
//int my_strlen(char*arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "study";
//	int ret = 0;
//	ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
////三十、完成
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}
////三十一、完成
//void exchange(char arr[],int sz)
//{
//	char i = 0;
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		i = arr[left];
//		arr[left] = arr[right];
//		arr[right] = i;
//		left++;
//		right--;
//	}	
//}
//void print(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//int main()
//{
//	int n = 0;
//	char arr[20] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%s", arr);
//	exchange(arr, sz);
//	print(arr, sz);
//	return 0;
//}
////三十二，完成（冒泡优化）
//void sort(int*arr,int sz)
//{
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	int x = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//		      
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//				x = 0;
//			}
//		}
//		if (x == 1)
//			break;
//	}
//}
//int main()
//{
//	int n = 0;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	for (n = 0; n < sz; n++)
//		printf("%d ", arr[n]);
//	return 0;
//}
////三十三、    完成    （三子棋）
//#include"game.h"
//void game()
//{
//	char board[ROW][COL]= { 0 };
//	char ret = '0';
//	//初始化
//	initboard(board,ROW ,COL);
//	//打印
//	printboard(board,ROW,COL);
//	//下棋
//	while (1)
//	{
//		//玩家走
//		player(board, ROW, COL);
//		printboard(board, ROW, COL);
//		ret = judge(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//电脑走
//		computer(board, ROW, COL);
//		printboard(board, ROW, COL);
//		ret = judge(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("玩家胜利\n");
//	else if (ret == '#')
//		printf("电脑胜利\n");
//	else
//		printf("平局\n");
//}
//void menu()
//{
//	printf("三子棋游戏\n");
//	printf("**********************\n");
//	printf("****    1.play    ****\n");
//	printf("****    0.exit    ****\n");
//	printf("**********************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////三十四、  完成   （扫雷）
//#include"game.h"
//void game()
//{
//	printf("游戏开始\n");
//	//创建棋盘
//	char main[ROWS][COLS] = { 0 };
//	char show[ROWS][COLS] = { 0 };
//	//初始化棋盘
//	initboard(main, ROWS, COLS, '0');
//	initboard(show, ROWS, COLS, '*');
//	//打印
//	printboard(show, ROW, COL);
//	//布雷
//	setboard(main, ROW, COL);
//	printboard(main, ROW, COL);
//	//扫雷
//	find(main, show, ROW, COL);
//}
//void menu()
//{
//	printf("扫雷游戏\n");
//	printf("**********************\n");
//	printf("****    1.play    ****\n");
//	printf("****    0.exit    ****\n");
//	printf("**********************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//	  menu();
//	  printf("请选择>:");
//      scanf("%d", &input);
//	  switch (input)
//	  {
//	  case 1:
//		  game();
//		  break;
//	  case 0:
//		  printf("退出游戏\n");
//		  break;
//	  default:
//		  printf("输入错误，请重新输入。。。\n");
//		  break;
//	  }
//	} while (input);
//	return 0;
//}
////三十五、完成
//void table(int n)
//{
//    int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//	
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	table(n);
//	return 0;
//}
////三十六、完成
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
////三十七、完成
//int my_strlen(char*arr)
//{
//	int count = 0;
//	int i = 0;
//	while (1)
//	{
//		if (*(arr + i) != '\0')
//			count++;
//		else
//			break;
//		i++;
//	}
//	return count;
//}
//void exchange(char*arr)
//{
//	int len=my_strlen(arr);
//	char i = 0;
//		i = *arr;
//		*arr = *(arr + len - 1);
//		*(arr + len - 1) = '\0';
//		if (my_strlen(arr + 1) >= 2)
//			exchange(arr+1);
//		*(arr + len - 1) = i;
//}
//void print(char* arr)
//{
//	int len = my_strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	exchange(arr);
//	print(arr);
//	return 0;
//}
////三十八、完成
//int countone(unsigned int i)
//{
//	int count = 0;
//	while (i)
//	{
//		if (i % 2 == 1)
//			count++;
//		i = i / 2;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = countone(i);
//	printf("%d\n", ret);
//	return 0;
//}
////三十九、完成
//int countone(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = (n&(n - 1));
//		count++;
//	}
//	return count;
//}
////假设n为13
////n    1101
////n-1  1100
////n    1100
////n-1  1011
////n    1000
////n-1  0111
////n    0000
////循环结束
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = countone(i);
//	printf("%d\n", ret);
//	return 0;
//}
////四十、完成
//void print(int n)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
////四十一、完成
//int digitsum(unsigned int i)
//{
//	if (i > 9)
//	{
//		return i % 10 + digitsum(i / 10);
//	}
//	else
//		return i;
//}
//int main()
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	int ret=digitsum(i);
//	printf("%d", ret);
//	return 0;
//}
////四十二、完成
//double pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / (pow(n, -k)));
//	else if (k==0)
//		return 1;
//	else
//		return n*pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
////四十三、完成
//void find(int *arr,int n)
//{
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	int count = 0;
//	int tmp = 0;
//	while (1)
//	{
//		for (count = 1, i = j; i < n; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				count++;
//			}
//			else
//			{
//				j = i+1;
//				break;
//			}
//		}
//		if (count>tmp)
//		{
//			x = j;
//			tmp = count;
//		}
//		else
//			break;
//	}
//	printf("count = %d\n", tmp);
//	for (i = x-tmp; i<x; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[20] = { 0 };
//	scanf("%d", &n);
//	for (m = 0; m < n; m++)
//	{
//		scanf("%d", &arr[m]);
//	}
//	find(arr,n);
//	return 0;
//}
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
