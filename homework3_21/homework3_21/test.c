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
//	for (int i = 1; i < 101; i++) {//��ѭ�������޶���[1,100]
//		k = i;
//		while (k != 0) {
//			if (k % 10 == 9) {//�ж�k�ĸ�λ���Ƿ���9��
//				times++;
//			}
//			k = k / 10;//�ж�k��ʮλ�Ƿ���9�����У������½���whileѭ��
//		}
//	}
//	printf("����%d������9\n", times);
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
//	printf("����ʮ����\n");
//
//	for (b = 0; b<10; b++)
//	{
//		scanf("%d", &a[b]);
//
//		if (c<a[b]) c = a[b];    
//	}
//
//	printf("���ֵ%d\n", c);
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)//  i��������
	{
		for (j = 1; j <= i; j++)//  j��������������j<=i���Ƶ�i�е��������С�ڵ���i
		{
			printf("%d*%d=%2d ", j, i, j*i);
			if (i == j)//  �ж����е�����
				printf("\n");
		}
	}
	return 0;
}