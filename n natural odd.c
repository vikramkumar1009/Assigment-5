//Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
main()
{
    int n;

    printf("enter the value of n to print odd number in reverse ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d,",2*n-1);
        n--;
    }
    return 0;
}
