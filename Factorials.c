# PIK-1
//Напишете програма, която пресмята N!*K!/(N-K)! за дадени N и K.
//N!=N.(N-1)!
#include<stdio.h>
int factorial(int a)
{
	int factA=1;
	for (;a>1 ; a--)
		factA *= a;
	return factA;
}
int main()
{
	int n, k, result;//result is always an integer
	printf("Enter N: ");
	scanf("%d", &n);

	printf("Enter K: ");
	scanf("%d", &k);
	printf("N!= %d\n", factorial(n));
	printf("K!= %d\n", factorial(k));
	printf("(N-K)!= %d\n", factorial(n-k));
	result = (factorial(n)*factorial(k)) / factorial(n - k);
	printf("N!*K!/(N-K)!= %d\n", result);
	return 0;
}
