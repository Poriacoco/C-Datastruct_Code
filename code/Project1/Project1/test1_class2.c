#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int a;
void test()
{
	printf("test-->%d\n", a);
}

	/*int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int num = num1 + num2;
	printf("%d\n",num);*/
int main()
{
	test();
	{
		printf("a=%d\n", a);
	}
	return 0;
}