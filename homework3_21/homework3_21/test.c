#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
#include<stdio.h>
//int main(void) {
//	int k, times = 0;
//	for (int i = 1; i < 101; i++) {//将循环次数限定在[1,100]
//		k = i;
//		while (k != 0) {
//			if (k % 10 == 9) {//判断k的个位上是否有9，
//				times++;
//			}
//			k = k / 10;//判断k的十位是否有9，若有，则重新进入while循环
//		}
//	}
//	printf("出现%d次数字9\n", times);
//}
#include<math.h>
//int main()
//{
//	int i;
//	float sum = 0.0, temp = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		temp = pow(-1, i + 1);
//		sum = sum + temp * 1 / i;
//	}
//	printf("sum is %f\n", sum);
//	return 0;
//}
//#include<stdlib.h>
//int main()
//{
//	int a[10] = { 1, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
//	int max = 0;
//	int i = 0;
//	for (i; i<sizeof(a) / sizeof(a[0]); i++)
//	{
//		if (a[i]>max)
//		{
//			max = a[i];
//
//		}
//	}
//	printf("%d \n", max);
//
//	system("pause");
//	return 0;
//}
//int main(void)
//{
//	int a[10];
//	int b;
//	int c = 0;                 
//	printf("输入十个数\n");
//
//	for (b = 0; b<10; b++)
//	{
//		scanf("%d", &a[b]);
//
//		if (c<a[b]) c = a[b];    
//	}
//
//	printf("最大值%d\n", c);
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)//  i控制行数
	{
		for (j = 1; j <= i; j++)//  j控制列数，条件j<=i控制第i行的输出列数小于等于i
		{
			printf("%d*%d=%2d ", j, i, j*i);
			if (i == j)//  判定换行的条件
				printf("\n");
		}
	}
	return 0;
}