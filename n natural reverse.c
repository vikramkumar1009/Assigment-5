//Write a program to print the first N natural numbers in reverse
#include<stdio.h>
main()
{
    int i=1,n;
    printf("enter the value of n ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d,",n+1-i);
        i++;
    }
    return 0;
}
