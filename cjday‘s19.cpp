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
//		printf("最大值为%d", a);
//	else if (b > a&&b > c)
//		printf("最大值为%d", b);
//	else
//		printf("最大值为%d", c);
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
// 在下列程序中由于错误定义了局部变量，将局部变量定义在主函数后，导致局部变量a,n在第二个for循环后不能归零，导致程序错误，现在看到的版本是改正后得到的。
//  需要重复归零的变量要定义在循环内。
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
//				a++;	//break;//使用break能实现判断一个数是否为素数。
//			}
//			
//		}
//		if (a == 1)                    //if(n==1)
//			{ 
//                                    {
//			  printf(" %d", i);       printf("  %d",i)通过定义一个变量计算可被整除的数的和是否等于2也能实现素数的判断
//			}                          }// 
//		
//
//		
//	}
//return 0;
//}
//sqrt-开平方库函数,利用开平方库函数可以优化以上程序，如果一个数（如12）可以被整除则他的其中一个除数（2、3）一定会小于他的开平方数（3.46），
   //利用这一点就可以将i的除数寻找范围缩小，不再是2到i-1，而是2到开平方数。
//使用方法;sqrt(i) ，并在头文件定义数学库函数#include<math.h>