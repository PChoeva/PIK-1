# PIK-1
#include<stdio.h>
/* Fahrenheit to Celsius table */
main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* lower limit of temperature scale*/
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	celsius = lower;
	printf("Fahrenheit | Celsius|\n-----------|--------|\n");
	while (celsius <= upper)
	{
		fahr = ((9.0/5.0)*celsius)+ 32.0;
		printf("%10.0f | %7.1f|\n", celsius, fahr);
		celsius += step;
	}
}
