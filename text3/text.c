#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
////�����ɹ�
//int main()
//{
//	int a = 0;
//	//int*p = &a;
//	//*p = 10;
//	scanf_s("%d",&a);
//	printf("%d", a);
//	return 0;
//}
////�ġ��ɹ� 
//int main()
//{   
//	int i = 1;
//	while (i <= 10)
//	{   
//		if (i == 5)
//			printf("����");	
//		else 
//           i++;   
//	}
//	return 0;
//}
////�塢�ɹ�
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
////�����ɹ�
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
////�ߡ��ɹ���Ч�ʼ���
//int main()
//{
//	int n = 1;
//	int i = 1;
//	int x = 1;
//	int y = 1;
//	printf("��Ҫ��Ľ׳���");
//	scanf_s("\n%d",&n);
//	if (n % 2 == 0)
//	{
//		for (i = 1; i < n ; i+=2)
//		{
//			x = x*i*(i + 1);
//		}
//		printf("�׳�Ϊ%d\n", x);
//	}
//	else
//	{
//		for (i = 2; i < n; i += 2)
//		{
//			y = y*i*(i + 1);
//		}
//		printf("�׳�Ϊ%d\n", y);
//	}
//	return 0;
//}
////�ˡ��ɹ���������
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
////�š��ɹ�Ч�ʵ�
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
//ע��:����ڶ���ѭ��ʱ��Ҫ��ret��ʼ������retֵ�������ۻ����
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
////ʮ���ɹ�Ч�ʸ�
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
////ʮһ���ɹ�
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
//			printf("�ҵ��ˣ��±�Ϊ:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}	
////ʮ�����ɹ�
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
////ʮ�����ɹ�
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
////ʮ�ġ��ɹ�
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
//		//������ѭ�����������
//		//һ������ģΪ0 break
//		//������ѭ�������˳�
//		if (j == i)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//�Ż���
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
////ʮ�塢�ɹ�
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
////ʮ�������
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
////ʮ�ߡ����
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
//	printf("������Ϊ:%d", max);
//	return 0;
//}
////ʮ�ˡ����
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
////ʮ�š����
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
////��ʮ�����
//#include<stdlib.h>
//#include<time.h>
//void mean()
//{
//	printf("��������Ϸ\n");
//	printf("**********************\n");
//	printf("****    1.play    ****\n");
//	printf("****    0.exit    ****\n");
//	printf("**********************\n");
//}
//void game()
//{
//	printf("��Ϸ��ʼ\n");
//	printf("����²�");
//	//1,����������
//	int ret = 0;
//    ret = rand()%100+1;
//	//printf("%d", ret);
//	//2,��Ϸѭ��
//	while (1)
//	{
//		int guess = 0;
//		scanf_s("%d", &guess);
//		if (ret < guess)
//			printf("�´���\n");
//		else if (ret>guess)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			   game();
//			   break;
//		case 0:
//			   printf("�˳���Ϸ\n");
//			   break;
//		default:
//			   printf("�������\n");
//			   break;
//		}
//	} while (input);
//	return 0;
//}
////��ʮһ����ɣ�ð������
//int main()
//{
//	int arr[] = {1,2,3,4,8,6,7,5,10,9};
//	int i = 0;//��ѭ��������Ϊsz-1��
//	int j = 0;//��ѭ��������Ϊsz-i���Ҵ��������±�
//	int n = 0;//��ʱ����
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
////��ʮ�������
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");	
//	while (1)
//	{
//		printf("��ĵ��Խ���һ�����ڹػ������롰�÷�Ѽ��ȡ���ػ���\n������>:");
//	    scanf("%s", input);
//		if (strcmp(input, "�÷�Ѽ") == 0)
//		{
//			system("shutdown -a");
//			printf("ȡ���ɹ�\n");
//			break;
//		}
//	}
//	return 0;
//}
////��ʮ�������
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
////��ʮ�ġ����
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
////��ʮ�塢���
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
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}
////��ʮ�������
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
//		printf("��������\n");
//	else
//		printf("������\n");
//	return 0;
//}
////��ʮ�ߡ���ɣ����ֲ��ң�
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
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ��%d\n",ret);
//    return 0;
//}
////��ʮ�ˡ����
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
////��ʮ�š����
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
////��ʮ�����
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
////��ʮһ�����
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
////��ʮ������ɣ�ð���Ż���
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
////��ʮ����    ���    �������壩
//#include"game.h"
//void game()
//{
//	char board[ROW][COL]= { 0 };
//	char ret = '0';
//	//��ʼ��
//	initboard(board,ROW ,COL);
//	//��ӡ
//	printboard(board,ROW,COL);
//	//����
//	while (1)
//	{
//		//�����
//		player(board, ROW, COL);
//		printboard(board, ROW, COL);
//		ret = judge(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//������
//		computer(board, ROW, COL);
//		printboard(board, ROW, COL);
//		ret = judge(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//		printf("���ʤ��\n");
//	else if (ret == '#')
//		printf("����ʤ��\n");
//	else
//		printf("ƽ��\n");
//}
//void menu()
//{
//	printf("��������Ϸ\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��Ϸ��ʼ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////��ʮ�ġ�  ���   ��ɨ�ף�
//#include"game.h"
//void game()
//{
//	printf("��Ϸ��ʼ\n");
//	//��������
//	char main[ROWS][COLS] = { 0 };
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ������
//	initboard(main, ROWS, COLS, '0');
//	initboard(show, ROWS, COLS, '*');
//	//��ӡ
//	printboard(show, ROW, COL);
//	//����
//	setboard(main, ROW, COL);
//	printboard(main, ROW, COL);
//	//ɨ��
//	find(main, show, ROW, COL);
//}
//void menu()
//{
//	printf("ɨ����Ϸ\n");
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
//	  printf("��ѡ��>:");
//      scanf("%d", &input);
//	  switch (input)
//	  {
//	  case 1:
//		  game();
//		  break;
//	  case 0:
//		  printf("�˳���Ϸ\n");
//		  break;
//	  default:
//		  printf("����������������롣����\n");
//		  break;
//	  }
//	} while (input);
//	return 0;
//}
////��ʮ�塢���
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
////��ʮ�������
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
////��ʮ�ߡ����
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
////��ʮ�ˡ����
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
////��ʮ�š����
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
////����nΪ13
////n    1101
////n-1  1100
////n    1100
////n-1  1011
////n    1000
////n-1  0111
////n    0000
////ѭ������
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = countone(i);
//	printf("%d\n", ret);
//	return 0;
//}
////��ʮ�����
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
////��ʮһ�����
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
////��ʮ�������
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
////��ʮ�������
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
////��ʮ�������
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
