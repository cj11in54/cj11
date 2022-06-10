#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
//	double c =0.0;
//	for (a = 2; a < 101; a++)
//	{
//		
//		c += b*1.0 / a ;//这里如果直接使用-1，并不会产生相隔的正负变换的效果，在这里插入-1的目的是使数正负变换，要点：要把没思路的功能拎出来实现。
//		b=-b;
//	}
//	printf("%lf", c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//在整型里，小数不显示，也不四舍五入。
//			count++;
//		
//	}
//	printf("%d", count);
//	return 0;
//
//}
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-1 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int c = 0;
//	for (i = 1; i < 10; i++)
//	{
//		
//		for (n = 1; n <= i; n++)
//		{
//			c = i * n;
//			printf(" %d*%d=%-2d\n", i, n, c);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int i = 0;
	scanf("%d", &i);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int c = 0;
	/*for (c = 0; c <= sz; c++)*/
	/*{*/c = sz / 2;
		if (i <arr[c])
		{
			c = c / 2;
			/*printf("该下标为:%d", c);
			break;*/
		}
	if (i > arr[c])
	{
		c = c + c / 2;
		}
	if (i = c)
	{
		printf("%d", c);
	}
		
	/*}*/
return 0;
}