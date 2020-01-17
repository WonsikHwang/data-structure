#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] == target)
			return i;
	}

	return -1;
}

int main(void)
{
	int arr[] = { 3, 5, 2, 4, 9 };
	int tar;
	printf("찾을 수를 입력하세요: ");
	scanf("%d", &tar);
	int idx = LSearch(arr, sizeof(arr) / sizeof(int), tar);
	if (idx == -1)
		printf("탐색 실패 \n");
	else
		printf("타겟 저장 인덱스: %d \n", idx);

	return 0;
}