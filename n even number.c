//Write a program to print the first N even natural numbers
#include<stdio.h>
main()
{
    int i=1,n;

    printf("enter the value of n to print odd number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d,",i*2);
        i++;
    }
    return 0;
}
