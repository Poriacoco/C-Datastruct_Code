#define _CRT_SECURE_NO_WARNINGS\

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include<string.h>
#include<assert.h>


//define���ǹؼ��֣���Ԥ����ָ��

//��ݼ�
//Ctrl+W,E: �����б� ��Error��
//F5: ��������
//Ctrl + F5 : ��ʼִ��(������)
//Shift + F5 : ֹͣ����
//Ctrl + Shift + F5 : ��������
//F9 : ���� / �رնϵ�
//Ctrl + F9 : ֹͣ�ϵ�
//Ctrl + Shift + F9 : ɾ��ȫ���ϵ�
//F10 : �����
//Ctrl + F10 : ���е���괦
//F11 : �����
//Ctrl + Shift + L: ɾ����ǰ��
//Ctrl + ���� : ѡ�е�ǰ�������������
//ctrl + ���ţ����˵������һ�ε�λ��
//CTRL + END�ĵ���λ����� CTRL + HOME�ĵ���λ����ǰ
//Ctrl + K, C : ע��ѡ������ ��Comment��
//Ctrl + K, U : ȡ��ѡ��ע������ ��UnComment��
//Ctrl + F: ����


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
//	int* p = &a;//pָ�����
//
//
//
//
//	
//	return 0;

//}
//ѧ��
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
//	//swich ֻ�ܴ������γ�����
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
//		printf("����\n");
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
//			continue;//breakִ��while ѭ��,���õ���ֹwhile��"continue" skip to while
//		printf("%d,", i);
//		i++;
//	}
//	
//	return 0;
//
//int main()
//{
//	char pw[20] = { 0 };
//	printf("��������");
//	scanf("%s", pw);
//
//	printf("ȷ������Y/N");
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
//ASCII�ַ���Ŀ
//int main()
//{
	//int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	//int i = 0;
	//int sz = sizeof(arr)/ sizeof(arr[0]);
	////sizeof(arr)���������С����λ���ֽ�
	////sizeof(arr[0])��������Ԫ�ش�С      
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�");
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
//	printf("����ǰa=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//#include <math.h>

//int prime(int n)//�������Ϊ1
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
//		printf("�ҵ���,�±���%d", ret);
//	}
//	else
//	{
//		printf("mei�ҵ���");
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

//��ӡ�˷��ھ���

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

//��ӡ100-200�������

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

//��ά����Խ��
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

//ð������ �Լ������ڲ��������ƴ���


//void bub(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//��λ
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

//����һ������arr[]={abcdefgh}


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

//����ÿλ��֮��

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

//ϲ����CHATGPT�Ĵ����𣿿�����һ��.......

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

//����ָ�����--> �������һ��ָ������ĵ�ַ

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

//ָ������ ���ָ�������

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

//����������м���1

//int count_1(unsigned int num)//���ܸ���
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
//	//��ֵ
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//��ӡ
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
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
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

//��С������

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


//�û��ַ���


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
//	//���� Guo ke da shang an.
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
//		//��� .na gnahs ad ek ouG
//	printf("%s", arr);
//
//		return 0;
//	}


//int main()
//{
//	//��һ������
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,& n);
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	//����һ
//	int a = 0;
//	for (a = 0; a < m; a++)
//	{
//		scanf("%d", arr1 + a);
//	}
//	int b = 0;
//	//�����
//	for (b = 0; b < n; b++)
//	{
//		scanf("%d", arr2 + b);
//	}
//	//��ӡ
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
//	const char* p2= "asdgfdsa";//�����������޸�,�ڴ���ֻ�ᴢ��һ�ݣ�
//	//p1==p2;
//
//	//*p = 'w';
//	printf("%s", p1);//%s��ӡ�ַ���
//	return 0;
//}


//ָ������--���ָ�������

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
//			//�����ڶ�ά���飬���Ƕ�ά�������ڴ���������ţ�arr1 arr2 arr3��һ���������
//
//		}
//	}
//
//
//
//	return 0;
//}

//ָ������������ָ�룻

//int *p1[5]--int(*p2)[5]
//������ͨ����ʾ��Ԫ�ص�ַ����������-sizeof(����������������ʾ�������飩��&������--ȡ����������ĵ�ַ��
//&arr+1 != arr+1;

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;//���ﴴ����*p2���������ǽ����ã�*p2����������ָ�룬���ڴ������ĵ�ַ������p2Ҳ���Ƕ���ָ��
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int(*p)[6] = &arr;
//	return 0;
//}



//��ά���ֵ���������ʾ��һ�е�ַ
//�����Ķ�ά���������һ�����һά��������飬�������"ƽ��"���� arr2 [3]={&arr1,&arr2,&arr3}
//�������δ�ӡһ����ά����
//���ں�����˵��&f()=f()
//���纯�� int fun(int a,int*p) return a;���ź�����ָ��pf---int (*pf)(int int*)=&fun
//(*pf)(2,&b)����ֱ�ӵ��ú���,Ҳ����д��pf(2,&b),*����ʡ�ԡ�



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

//����ָ���ʹ��

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

//{C�����������}--���ӵĺ���ָ��

//int main()
//{
//	(*(void(* )())0)();//0��int,ǿ������ת��Ϊvoid(*  )()�ĺ���ָ�����ͣ�Ȼ��*��ʼ�������ã������ǿգ�
//	//
//	void(*function(int , void(* )(int)))(int);
//	//���д���Ϊ����������function ��һ����������,����Ϊint �Լ�����ָ��void(* )(int)�����������Ǻ���ָ��
//	//����Ҳ��ʹ��typedef ��д,��:
//	typedef unsigned int unit;
//	//����������unsigned int�Ķ���Ϊunit;
//	typedef void(* pf_t)(int);
//	//����������typedef void(* )(int)�Ķ���Ϊpf_t;
//	//void(*function(int , void(* )(int)))(int)==pf_t(function(int,pf_t))
//}

//strlen ����size_t

//int main()
//{
//	char arr[] = "abcdef";//abcdef\0
//	char arr2[] = { 'b','i','t' };//���ֵ
//	int len = 0;
//	len=strlen(arr);//�����޷�������size_t
//	printf("%d", len);//6
//	return 0;
//}

//char*strcpy(char*destination,const char*source)
//дһ��mtstrlen����

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


//�ַ���׷��strcat

//�ַ����Ƚ�strcmp

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
#include <malloc.h> // ����malloc.h��ʹ��_strdup

#define MAX_LINE_LENGTH 1024

// ����ԭ������
void process_fasta_file(const char* fasta_filename, const char* csv_filename);

int main() {
    // ָ��FASTA�ļ���CSV�ļ�������
   
    const char* fasta_filename = "E:\\Desktop\\NC_004718.3.fasta";
    const char* csv_filename = "E:\\Desktop\\NC_004718.3.csv";

    // ����FASTA�ļ�������CSV�ļ�
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

    // д��CSVͷ��
    fprintf(csv_fp, "Protein ID,Length\n");

    while ((read_chars = fread(line, 1, MAX_LINE_LENGTH - 1, fasta_fp)) > 0) {
        line[read_chars] = '\0'; // ȷ���ַ����Կ��ַ���β

        // ���FASTA������
        if (line[0] == '>') {
            // ���sequence��ΪNULL����ʾ֮ǰ�Ѿ���ȡ�����У�������Ҫд��CSV
            if (sequence != NULL) {
                fprintf(csv_fp, "%s,%zu\n", sequence, sequence_length);
                free(sequence); // �ͷ�֮ǰ������ڴ�
                sequence = NULL;
                sequence_length = 0;
            }

            // ��ȡ����ID
            char* id = _strdup(line + 1); // ʹ��_strdup����strdup
            if (id != NULL) {
                char* id_end = strchr(id, '\n');
                if (id_end != NULL) {
                    *id_end = '\0'; // �Ƴ����з�
                }
                fprintf(csv_fp, "%s,", id); // д������ID
                free(id); // �ͷŸ��Ƶ�ID�ڴ�
                id = NULL;
            }

            // ���sequence_length��������ȡ����
            sequence_length = 0;
        }
        else {
            // �ۼ����г���
            sequence_length += strlen(line);
        }
    }

    // ����Ƿ���δд�������
    if (sequence != NULL) {
        fprintf(csv_fp, "%s,%zu\n", sequence, sequence_length);
        free(sequence);
    }

    // �ر��ļ�
    fclose(fasta_fp);
    fclose(csv_fp);
}