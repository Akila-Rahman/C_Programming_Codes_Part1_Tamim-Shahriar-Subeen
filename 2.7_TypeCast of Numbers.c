#include<stdio.h>
int main()
{
    int n;
    double x;

    x = 10.5;
    n = (int)x;//explicit type casting from double to int

    printf("Value of n is %d\n",n);
    printf("Value of x is %lf\n",x);

    return 0;
}
