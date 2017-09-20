#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main (void){
	char a,b,c;
	
	scanf("%c %c %c", &a,&b,&c );
	if ((a==b) && (b==c) && (c==a) ) {
		printf("3 sa zhoduju");
	}else
	{
		if (a==b||b==c||c==a){
			printf("2 sa zhoduju");
		}else
		{
				printf("ziadne sa nezhoduju");
		}
	}
		

	getchar();
	getchar();
	return 0;
}