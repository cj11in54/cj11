#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 1;
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		a = a *n;
//	}
//	printf("all=%d\n", a);
//
//		return 0;
//}
//int main()
//{
//	int n = 1;
//	int i = 0;
//	int a = 1;
//	int all = 0;
//	for (n = 1; n <= 2; n++) 
//	{
//		for (i = 1; i <= n; i++)
//	
//		{
//		
//			a = a * n;
//	
//		}
//		all += a;
//	}
//	
//	printf("all=%d\n", all);
//
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	scanf("%d", &b);
//	for (a = b; a <= 0; a--)
//	{
//		c = a * c;
//
//		printf("&b=%d", c);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b&&a > c)
//		printf("���ֵΪ%d", a);
//	else if (b > a&&b > c)
//		printf("���ֵΪ%d", b);
//	else
//		printf("���ֵΪ%d", c);
//	return 0;
//
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < c)
//	{
//		int d = c;
//		c = a;
//		a = d;
//	}
//	if (a < b)
//	{
//		int d = b;
//		b = a;
//		a = d;
//	}
//	if (b < c)
//	{
//		int d = c;
//		c = b;
//		b = d;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 0;i<100000; i++)
//	{
//		if (i % 3 == 0)
//		{
//			a = i;
//			printf("%d\n", a);
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int p = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 0;; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			 p = i;
//		}
//		if (c < p)
//		{
//			c = i;
//		 }
//
//	}
//}
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a;
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100)
//		{
//			printf("%d\n", i);
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
// �����г��������ڴ������˾ֲ����������ֲ������������������󣬵��¾ֲ�����a,n�ڵڶ���forѭ�����ܹ��㣬���³���������ڿ����İ汾�Ǹ�����õ��ġ�
//  ��Ҫ�ظ�����ı���Ҫ������ѭ���ڡ�
//int main()
//{
//	
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 0;
//		int n = 0;
//		for (n=i; n>=2; n--)
//		{
//			if(i % n == 0)
//			{
//				a++;	//break;//ʹ��break��ʵ���ж�һ�����Ƿ�Ϊ������
//			}
//			
//		}
//		if (a == 1)                    //if(n==1)
//			{ 
//                                    {
//			  printf(" %d", i);       printf("  %d",i)ͨ������һ����������ɱ����������ĺ��Ƿ����2Ҳ��ʵ���������ж�
//			}                          }// 
//		
//
//		
//	}
//return 0;
//}
//sqrt-��ƽ���⺯��,���ÿ�ƽ���⺯�������Ż����ϳ������һ��������12�����Ա���������������һ��������2��3��һ����С�����Ŀ�ƽ������3.46����
   //������һ��Ϳ��Խ�i�ĳ���Ѱ�ҷ�Χ��С��������2��i-1������2����ƽ������
//ʹ�÷���;sqrt(i) ������ͷ�ļ�������ѧ�⺯��#include<math.h>