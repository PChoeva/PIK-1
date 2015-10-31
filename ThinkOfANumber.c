# PIK-1
#include<stdio.h>
int main()
{
	char responce;
	int higher=100, lower=1;
	int middle = 50;
	printf("Think of a number between 1 and 100!\nl for lower, h for higher, y(yes) for a correct number.\n");
	do
	{
		printf("Is your number %d?\n", middle);
		scanf("%c", &responce); fflush(stdin);
		//printf("%c\n", responce);
		if (responce == 'l')
		{
			higher = middle;
			middle = (higher+lower)/2;
		}
		if (responce == 'h')
		{
			lower = middle;
			middle = (lower + higher)/2;
		}
	} while (responce != 'y');
	printf("Hah, I`m so smart that I guessed it :) It`s %d.\n", middle);
	return 0;
}
