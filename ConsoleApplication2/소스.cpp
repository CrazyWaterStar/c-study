#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>

int main()
{
	int index = 0, end_index, benchmark , check ;
	char a[150];
	
	scanf("%s",a);
	while (a[index++] != NULL);
	end_index = index - 1;
	index = 0;
	benchmark = 1;
	check = 0;
	


	if (check == 1)
		printf("NOISE");
	else if (check == 0)
		printf("SUBMARINE");

	return 0;

}
