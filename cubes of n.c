//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
main()
{
    int i=1,n;

    printf("enter the value of n to print cubes of natural number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d,",i*i*i);
        i++;
    }
    return 0;
}
