# PIK-1
#include<stdio.h>
int sumNums(int a, int b, int c)
{
    int sum=0;
    sum=a+b+c;
    return sum;
    //printf("Sum: %d", a+b+c);
}
int Smallest(int a, int b, int c)
{
    int min=a;
    if(min>b) min=b;
    if(min>c) min=c;
    return min;
}
double Average(int a, int b, int c)
{
    double avg;
    avg=(double)sumNums(a,b,c)/3;
    return avg;
}
//ax^2+bx+c=0
void func(int a, int b, int c)
{
    printf("%dx^2+%dx+%d=0\n", a, b, c);
    double disc;
    double x1, x2;
    disc=(double)b*(double)b-4*(double)a*(double)c;
    printf("disc=%g\n", disc);

    if(disc<0) printf("negative discriminant-> no x\n");
    else{
    x1=(-(double)b+sqrt(disc))/(2*(double)a);
    x2=(-(double)b-sqrt(disc))/(2*(double)a);
    printf("x1=%g\n", x1);
    printf("x2=%g\n", x2);
    }
}
void func(int a, int b, int c);
int main()
{
    int a, b, c, choise, sum, min;
    double avg;
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    printf("c = "); scanf("%d", &c);

    do{
        printf("-----Menu-----\n");
        printf("1. Sum\n");
        printf("2. Smallest number\n");
        printf("3. Average number\n");
        printf("4. Function ax^2+b+c\n");
        printf("5. Exit\n");
        printf("--------------\n");

        printf("Your choise: "); scanf("%d", &choise);
        switch(choise)
        {
            case 1: sum=sumNums(a,b,c); printf("Sum: %d\n", sum); break;
            case 2: min=Smallest(a,b,c); printf("Smallest number: %d\n", min); break;
            case 3: avg=Average(a,b,c); printf("Average number: %g\n", avg); break;
            case 4: func(a,b,c); break;
            case 5: exit(0); break;
        }
    }while(1);
    return 0;
}

