#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));                       //char 占一个字节，（内存）sizeof char 
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	int i = 0;
	for (i = 0; i <= strlen(arr1); i++)
	{
		printf("%c ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i <= sizeof(arr2) / sizeof(arr2[0])-1; i++)
	{
		printf("%c ", arr2[i]);
	}
	int arr3[] = {1,2,3,4,5,6,7,8,9,10};                    //int 一般在主流32位和64位编译器中都占4个字节
	printf("\n");
	for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)   //数组在内存中是连续存放的
	{
		printf("arr3[%d] = %p---%d\n", i, &arr3[i],arr3[i]);
	}
		//-----------------|一维数组的使用|-------------------------End
	int arr4[][4] = { {1,2,3},{1,3,5,7},{1,2,4,5} };//char arr是字符数组  int arr是整形数组
	int j = 0;     //二位数组初始化可以把行数省略，列数必须有
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr4[%d][%d] = %d (%p)\n", i, j, arr4[i][j],&arr4[i][j]);
		}
		printf("\n");
	}
	return 0;
}
