//Write a program to print MySirG N times on the screen
#include<stdio.h>
main()
{
   int i=1,n;
   printf("enter value of n \n");
   scanf("%d",&n);


   while(i<=n)
   {
     printf("MYSIRG\n",i);
     i++;
   }
   return 0;
}
