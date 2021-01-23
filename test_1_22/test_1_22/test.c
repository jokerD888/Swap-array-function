#define _CRT_SECURE_NO_WARNINGS 1
//7.5
//#include<stdio.h>
//void Scan(int *p,int n);
//void Print(int *p, int n);
//void Swap(int* a, int* b, int n);
//int main(void)
//{
//	int a[10] = { 0 };
//	int b[10] = { 0 };
//	int n;
//	printf("Please enter number of arrayL:");
//	scanf("%d", &n);
//	Scan(a,n);
//	Scan(b,n);
//	printf("Before exchange:\n");
//	Print(a, n);
//	Print(b, n);
//	printf("After exchange:\n");
//	Swap(a, b, n);
//	Print(a, n);
//	Print(b, n);
//	return 0;
//}
//void Scan(int* p,int n)
//{
//	/*int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", p + i);
//	}*/
//	int* a = p;
//	for (p; p < a + n; p++)
//	{
//		scanf("%d", p);
//	}
//}
//void Print(int* p, int n)
//{
//	/*int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	printf("\n");*/
//	int* a = p;
//	for (p; p < a + n; p++)
//	{
//		printf("%d ", *p);
//	}
//	printf("\n");
//}
//void Swap(int* a, int* b, int n)
//{
//	int temp,i;
//	int* pa = a;
//	int* pb = b;
//	for (a,b; a<pa+n&&b<pb+n; a++,b++ )
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//}
//7.6
#include<stdio.h>
void Find_Max_Min(int* p, int* Max, int* Min, int n);
int main(void)
{
	int arr[10] = { 0 };
	int* p = arr;
	int i,max=0,min=0;
	printf("Please enter 10 number:\n");
	for (p; p < arr + 10; p++)
	{
		scanf("%d", p);
	}
	Find_Max_Min(arr, &max, &min, 10);
	printf("max = %d  ,  min = %d", max, min);
	return 0;
}
void Find_Max_Min(int* p, int* Max, int* Min, int n)
{
	int* a = p;
	*Max = *p;
	*Min = *p;
	for (++p; p < a + n; p++)
	{
		if (*Max < *p)
		{
			*Max = *p;
		}
		if (*Min > *p)
		{
			*Min = *p;
		}
	}
}






















