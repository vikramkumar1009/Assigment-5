//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
main()
{
    int n;

    printf("enter the value of n to print even number in reverse");
    scanf("%d",&n);
    while(n)
    {
        printf("%d,",n*2);
        n--;
    }
    return 0;
}
