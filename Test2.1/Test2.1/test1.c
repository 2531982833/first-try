#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//汉诺塔
void hanoi(int n, char A, char B, char C)
{

	if (n == 1)
	{
		printf("%c->%c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);                  //把前n-1个由A通过C移到B
		printf("%c->%c\n", A, C);          //把A上的盘子移到C
		hanoi(n - 1, B, A, C);                  //把B上的n-1个盘子由A移到C
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n,'A','B','C');
	return 0;
}
//斐波那契数列
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//递归求阶乘
//int factorial(int n)
//{
//	if (n > 0)
//		return n*factorial(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("n的阶乘为:%d\n", factorial(n));
//	return 0;
//}
//int my_strlen(char str[])
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char str[] = "abc";
//	int len = 0;
//	len = my_strlen(str);
//	printf("strlen=%d\n", len);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}