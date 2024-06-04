#define _CRT_SECURE_NO_WARNINGS\

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include<string.h>
#include<assert.h>


//define不是关键字，是预处理指令

//快捷键
//Ctrl+W,E: 错误列表 （Error）
//F5: 启动调试
//Ctrl + F5 : 开始执行(不调试)
//Shift + F5 : 停止调试
//Ctrl + Shift + F5 : 重启调试
//F9 : 启用 / 关闭断点
//Ctrl + F9 : 停止断点
//Ctrl + Shift + F9 : 删除全部断点
//F10 : 逐过程
//Ctrl + F10 : 运行到光标处
//F11 : 逐语句
//Ctrl + Shift + L: 删除当前行
//Ctrl + 单击 : 选中当前点击的整个单词
//ctrl + 减号：回退到光标上一次的位置
//CTRL + END文档定位到最后 CTRL + HOME文档定位到最前
//Ctrl + K, C : 注释选定内容 （Comment）
//Ctrl + K, U : 取消选定注释内容 （UnComment）
//Ctrl + F: 搜索


//int main()
//{
	//	printf("%c\n",'\130');
	//	
	//	return 0;
	//}0

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a=0;
//
//	int b=0;
//	scanf("%d%d", &a, &b);
//	int r=Max(a, b);
//	printf("%d\n", r);
//	return 0;
//}i
//extern int g_val;

//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//p指针变量
//
//
//
//
//	
//	return 0;

//}
//学生
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a / b, a % b);
//	return 0;
//}

//int main()
//{
//	/*int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d,", i);
//		i++;*/
//	int day = 0;
//	//swich 只能处理整形常变量
////	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("错误\n");
//
//
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//break执行while 循环,永久的终止while；"continue" skip to while
//		printf("%d,", i);
//		i++;
//	}
//	
//	return 0;
//
//int main()
//{
//	char pw[20] = { 0 };
//	printf("输入密码");
//	scanf("%s", pw);
//
//	printf("确认密码Y/N");
//	int ret = getchar();
//	if ('Y' == getchar)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//
//}
//ASCII字符题目
//int main()
//{
	//int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	//int i = 0;
	//int sz = sizeof(arr)/ sizeof(arr[0]);
	////sizeof(arr)计算数组大小，单位是字节
	////sizeof(arr[0])计算数组元素大小      
	//while (i < sz)
	//{
	//	printf("%c", arr[i]);
	//	i = i++;
	//}
	/*int year, month, date;
	scanf("%4d%2d%2d", &year, &month, &date);
	printf("year=%d\nmonth=%02d\ndate=%2d\n", year, month, date);*/
	/*int n = printf("skdfjhasdk!");
	printf("\n%d\n", n);*/
	/*int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	int max = arr[0];
	i = 1;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		i++;


	}
	printf("max=%d", max);

		return 0;
}*/
//int main()
//{
//	int i = 0;
//	for (i=0;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	printf("hehe");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int tol = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		tol = tol * i;
//		sum = sum + tol ;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr)/ sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
// 
// 
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}

//	return 0;
//}


//void Swap(int* px,int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//#include <math.h>

//int prime(int n)//素数输出为1
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (j % n == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int mian()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 100; i <= 200; i += 2);
//	{
//		if (prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n %d", count);
//	return 0;
//}
//int main()
//{
//	printf("123");
//	return 0;
//}

//int Search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 0,1,3,4,5,6,7,8 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = Search(arr, k, sz);
//	if (ret !=-1)
//	{
//		printf("找到了,下标是%d", ret);
//	}
//	else
//	{
//		printf("mei找到了");
//	}
//	return 0;
//}



//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num/10;
//
//	}
//	return 0;
//	
//
//}
//void count(unsigned int n)
//{
//	if(n > 9)
//	{
//		count(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	count(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != 0)
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	for (i = 1;i <= n-2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//	/*if (n==1)
//		return 1;
//	else
//		return n * fac(n - 1);*/
//
//}
//int main()
//{
//	/*int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);*/
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	if (n<= 2)
//	{
//		ret = 1;
//	}
//	else
//		ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//打印乘法口诀表

//void tab(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	/*int arr[] = { 1,4,21,8,5,1,9,6,12 };
//	int i = 0;
//	int max = arr[0];
//	for(i=0;i<=8;i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("%d\n", max);*/
//	/*int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}*/
//	int n = 0;
//	scanf("%d", &n);
//	tab(n);
//	return 0;
//}

//打印100-200间的素数

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if(i%j == 0)
//			{
//				printf("%d\t", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//二维数组越界
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3;i++)
//	{
//		for (j = 0;j <= 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//	}
//	return 0;
//
//}
//

//冒泡排序 以及函数内部数组的设计错误


//void bub(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//换位
//			int mid = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				mid = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = mid;
//			}
//		}
//		
//
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,6,2,5,3,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bub(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//逆序一个数组arr[]={abcdefgh}


//void reverse(char arr[],int left,int right)
//{
//	char tem = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tem;
//	if (left < right)
//	{
//		reverse(arr, left + 1,right-1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int num = strlen(arr);
//	int left = 0;
//	int right = num - 1;
//	
//	
//	reverse(arr,left,right);
//	printf("%s", arr);
//	return 0;
//}

//计算每位数之和

//int sum(int num)
//{
//	if (num > 9)
//	{
//		return sum(num / 10) + num % 10;
//	}
//	else
//		return num;
//}
//
//
//int main()
//{
//	int num = 1234;
//	int ret = 0;
//	ret=sum(num);
//	printf("%d", ret);
//	return 0;
//}

//喜欢我CHATGPT的代码吗？看不懂一点.......

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 10
//#define MINES 15
//
//char grid[SIZE][SIZE];
//char revealedGrid[SIZE][SIZE];
//
//void initializeGrid() {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            grid[i][j] = ' ';
//            revealedGrid[i][j] = '-';
//        }
//    }
//}
//
//void placeMines() {
//    srand(time(NULL));
//    for (int i = 0; i < MINES; i++) {
//        int x, y;
//        do {
//            x = rand() % SIZE;
//            y = rand() % SIZE;
//        } while (grid[x][y] == '*');
//        grid[x][y] = '*';
//    }
//}
//
//void printGrid() {
//    printf("  ");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", i);
//    }
//    printf("\n");
//
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d|", i);
//        for (int j = 0; j < SIZE; j++) {
//            printf("%c|", revealedGrid[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int countAdjacentMines(int x, int y) {
//    int count = 0;
//    for (int dx = -1; dx <= 1; dx++) {
//        for (int dy = -1; dy <= 1; dy++) {
//            int newX = x + dx;
//            int newY = y + dy;
//            if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE && grid[newX][newY] == '*') {
//                count++;
//            }
//        }
//    }
//    return count;
//}
//
//void revealCell(int x, int y) {
//    if (revealedGrid[x][y] != '-') {
//        return;
//    }
//
//    revealedGrid[x][y] = '0' + countAdjacentMines(x, y);
//
//    if (revealedGrid[x][y] == '0') {
//        for (int dx = -1; dx <= 1; dx++) {
//            for (int dy = -1; dy <= 1; dy++) {
//                int newX = x + dx;
//                int newY = y + dy;
//                if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE) {
//                    revealCell(newX, newY);
//                }
//            }
//        }
//    }
//}
//
//int main() {
//    initializeGrid();
//    placeMines();
//
//    int gameOver = 0;
//
//    while (!gameOver) {
//        printGrid();
//
//        int x, y;
//        printf("Enter row and column (e.g., 3 4): ");
//        scanf("%d %d", &x, &y);
//
//        if (x < 0 || x >= SIZE || y < 0 || y >= SIZE || revealedGrid[x][y] != '-') {
//            printf("Invalid input. Try again.\n");
//            continue;
//        }
//
//        if (grid[x][y] == '*') {
//            printf("Game Over! You hit a mine.\n");
//            gameOver = 1;
//        }
//        else {
//            revealCell(x, y);
//            int unrevealedCount = 0;
//            for (int i = 0; i < SIZE; i++) {
//                for (int j = 0; j < SIZE; j++) {
//                    if (revealedGrid[i][j] == '-') {
//                        unrevealedCount++;
//                    }
//                }
//            }
//            if (unrevealedCount == MINES) {
//                printf("Congratulations! You win!\n");
//                gameOver = 1;
//            }
//        }
//    }
//
//    printGrid();
//    return 0;
//}
//
  //

//二级指针变量--> 用来存放一级指针变量的地址

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	int** ppa = &pa;
//	**ppa = 30;
//	printf("%d\n",a);
//	return 0;
//}

//指针数组 存放指针的数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}
//}
//

//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 1,2,3 };
//    int arr3[3] = { 1,2,3 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", parr[i][j]);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//计算二进制中几个1

//int count_1(unsigned int num)//接受负数
//{
//	unsigned int quotient = num;
//	int remainder = 0;
//	int count = 0;
//	do
//	{
//		remainder = quotient % 2;
//		if(remainder == 1)
//		count=count+1;
//		quotient = quotient / 2;
//
//	} while (quotient);
//		return count;
//}
//int main()
//
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int n=count_1(num);
//	printf("%d", n);
//	return 0;
//}
//int count_1(int n)
//{
//	int tol = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		tol += 1;
//	}
//	return tol;
//}
//int main()
//
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int n = count_1(num);
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	//赋值
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void test(int a[])
//{
//	//
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	test(arr);
//	printf("hhh");
//	return 0;
//}
//}
//
//void test1()
//{
//	printf("he");
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { "xxxxxxxxxxx" };
//	char arr2[] = { "hehe" };
//	return 0;
//}

//int my_strlen(const char*str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "he  he";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	char arr[88] = { 0 };
//	int line = 0;
//	scanf("%d",&line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		arr[i] = ' ';
//	}
//	arr[line / 2 + 1] = '*';
//	printf("%s\n", arr);
//
//	int left = 0;
//	int right = line - 1;
//	while (left < right)
//	{
//		arr[line / 2-left] = arr[line/2+1+line-right] = '*';
//		printf("%s\n", arr);
//		left++;
//		right--;
//	}
//	/*left -= 1;
//	right += 1;*/
//	while (left>=0)
//	{
//		arr[line / 2 - left] = arr[line / 2 + 1 + line - right] = ' ';
//		printf("%s\n", arr);
//		left--;
//		right++;
//	}
//
//
//	return 0;
//
//}

//最小公倍数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	for (i = a ; i <= a*b; i += a)
//	{
//		if (i % a==0 && i % b == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}


//置换字符串


//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = {0};
//
//	//输入 Guo ke da shang an.
//	gets(arr);
//
//	//reverse arr
//	int len = strlen(arr);
//	reverse(arr, arr + len-1);
//	
//	//reverse word
//	char* start = arr;
//	char* end = arr;
//	while (*start)
//	{
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//
//		{
//			end += 1;
//		}
//		start = end;
//	}
//		//输出 .na gnahs ad ek ouG
//	printf("%s", arr);
//
//		return 0;
//	}


//int main()
//{
//	//第一行输入
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,& n);
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	//数组一
//	int a = 0;
//	for (a = 0; a < m; a++)
//	{
//		scanf("%d", arr1 + a);
//	}
//	int b = 0;
//	//数组二
//	for (b = 0; b < n; b++)
//	{
//		scanf("%d", arr2 + b);
//	}
//	//打印
//	int i = 0;
//	int j = 0;
//	while(i<m&&j<n)
//	{
//		if (arr1[i] < arr2[j])
//			{
//				printf("%d", arr1[i]);
//					i++;
//			}
//		else
//			{
//				printf("%d", arr2[j]);
//					j++;
//			}
//	}
//			
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < m; i++)
//		{
//			printf("%d", arr1[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	const char* p1 = "asdgfdsa";
//	const char* p2= "asdgfdsa";//常量，不可修改,内存中只会储存一份；
//	//p1==p2;
//
//	//*p = 'w';
//	printf("%s", p1);//%s打印字符串
//	return 0;
//}


//指针数组--存放指针的数组

//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[] = { 1,2,3,4 };
//	
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//*p=i==p[i]---
//			//*(arr[i]+j)=arr[i][j]
//			printf("%d ", arr[i][j]);
//			printf("%d\n", *(arr[i]+j));
//			//类似于二维数组，但是二维数组在内存里连续存放，arr1 arr2 arr3不一定连续存放
//
//		}
//	}
//
//
//
//	return 0;
//}

//指针数组与数组指针；

//int *p1[5]--int(*p2)[5]
//数组名通常表示首元素地址；两个例外-sizeof(单独放数组名，表示整个数组）；&数组名--取出整个数组的地址；
//&arr+1 != arr+1;

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;//这里创建了*p2变量，不是解引用，*p2类型是数组指针，用于存放数组的地址，所以p2也不是二级指针
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int(*p)[6] = &arr;
//	return 0;
//}



//二维数字的数组名表示第一行地址
//我理解的二维数组更像是一个存放一维数组的数组，即数组的"平方"，如 arr2 [3]={&arr1,&arr2,&arr3}
//函数传参打印一个二维数组
//对于函数来说，&f()=f()
//例如函数 int fun(int a,int*p) return a;则存放函数的指针pf---int (*pf)(int int*)=&fun
//(*pf)(2,&b)可以直接调用函数,也可以写成pf(2,&b),*可以省略。



//void print1(int(*p)[4]/*int arr[3][4]*/, int m, int n)
//{
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(*p + i) + j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	print1(arr, 3, 4);
//
//
//	return 0;
//}

//函数指针的使用

//int add(int a, int b)
//{
//	return a + b;
//}
//
//void fun(int(*pf)(int,int))
//{
//	int a = 2;
//	int b = 3;
//	int ret= (*pf)(a, b);
//	//pf(a,b)
//	printf("%d\n", ret);
//
//}
//int main()
//{
//	/*int (*pf)(int, int) = &add;*/
//	//int (*pf)(int, int) = add;
//    fun(add);
//
//	return 0;
//}

//{C程序设计陷阱}--复杂的函数指针

//int main()
//{
//	(*(void(* )())0)();//0是int,强制类型转换为void(*  )()的函数指针类型；然后*开始函数调用，参数是空；
//	//
//	void(*function(int , void(* )(int)))(int);
//	//上行代码为函数声明，function 是一个函数名字,参数为int 以及函数指针void(* )(int)，返回类型是函数指针
//	//代码也可使用typedef 改写,如:
//	typedef unsigned int unit;
//	//函数类型是unsigned int的定义为unit;
//	typedef void(* pf_t)(int);
//	//函数类型是typedef void(* )(int)的定义为pf_t;
//	//void(*function(int , void(* )(int)))(int)==pf_t(function(int,pf_t))
//}

//strlen 返回size_t

//int main()
//{
//	char arr[] = "abcdef";//abcdef\0
//	char arr2[] = { 'b','i','t' };//随机值
//	int len = 0;
//	len=strlen(arr);//返回无符号整形size_t
//	printf("%d", len);//6
//	return 0;
//}

//char*strcpy(char*destination,const char*source)
//写一个mtstrlen函数

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* p = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return p;
//
//
//}
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[20] = "abcdefg";
//
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//


//字符串追加strcat

//字符串比较strcmp

//#define PRINT(N) printf("the value of "#N" is %d\n",N)
//int main()
//{
//	int a = 0;
//	PRINT(a);
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h> // 引入malloc.h以使用_strdup

#define MAX_LINE_LENGTH 1024

// 函数原型声明
void process_fasta_file(const char* fasta_filename, const char* csv_filename);

int main() {
    // 指定FASTA文件和CSV文件的名称
   
    const char* fasta_filename = "E:\\Desktop\\NC_004718.3.fasta";
    const char* csv_filename = "E:\\Desktop\\NC_004718.3.csv";

    // 处理FASTA文件并生成CSV文件
    process_fasta_file(fasta_filename, csv_filename);

    return 0;
}

void process_fasta_file(const char* fasta_filename, const char* csv_filename) {
    FILE* fasta_fp = fopen(fasta_filename, "r");
    if (fasta_fp == NULL) {
        fprintf(stderr, "Error opening FASTA file.\n");
        return;
    }

    FILE* csv_fp = fopen(csv_filename, "w");
    if (csv_fp == NULL) {
        fprintf(stderr, "Error opening CSV file.\n");
        fclose(fasta_fp);
        return;
    }

    char line[MAX_LINE_LENGTH];
    char* sequence = NULL;
    size_t sequence_length = 0;
    size_t read_chars = 0;

    // 写入CSV头部
    fprintf(csv_fp, "Protein ID,Length\n");

    while ((read_chars = fread(line, 1, MAX_LINE_LENGTH - 1, fasta_fp)) > 0) {
        line[read_chars] = '\0'; // 确保字符串以空字符结尾

        // 检查FASTA标题行
        if (line[0] == '>') {
            // 如果sequence不为NULL，表示之前已经读取过序列，现在需要写入CSV
            if (sequence != NULL) {
                fprintf(csv_fp, "%s,%zu\n", sequence, sequence_length);
                free(sequence); // 释放之前分配的内存
                sequence = NULL;
                sequence_length = 0;
            }

            // 提取序列ID
            char* id = _strdup(line + 1); // 使用_strdup代替strdup
            if (id != NULL) {
                char* id_end = strchr(id, '\n');
                if (id_end != NULL) {
                    *id_end = '\0'; // 移除换行符
                }
                fprintf(csv_fp, "%s,", id); // 写入序列ID
                free(id); // 释放复制的ID内存
                id = NULL;
            }

            // 清空sequence_length并继续读取序列
            sequence_length = 0;
        }
        else {
            // 累加序列长度
            sequence_length += strlen(line);
        }
    }

    // 检查是否还有未写入的序列
    if (sequence != NULL) {
        fprintf(csv_fp, "%s,%zu\n", sequence, sequence_length);
        free(sequence);
    }

    // 关闭文件
    fclose(fasta_fp);
    fclose(csv_fp);
}