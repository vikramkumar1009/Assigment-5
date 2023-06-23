//Write a program to print the first N natural numbers.
#include<stdio.h>
main()
{
   int i=1,n;
   printf("enter value of n \n");
   scanf("%d",&n);


   while(i<=n)
   {
     printf("%d\n",i);
     i++;
   }
   return 0;
}
