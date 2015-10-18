# PIK-1
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	if (year % 4 == 0 || year % 400 == 0)
	{
		if (year % 100 != 0)
			printf("Year %d is leap.\n", year);
	}
	printf("Year %d is not leap.\n", year);
	return 0;
}
