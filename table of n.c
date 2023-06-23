//Write a program to print a table of N.
#include<stdio.h>
main()
{
   int i=1,n;
   printf("enter value of n to print table\n");
   scanf("%d",&n);
   printf("table of %d \n",n);

   while(i<=10)
   {
     printf("%d*%d=%d\n",n,i,n*i);
     i++;
   }
   return 0;
}
