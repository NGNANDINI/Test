#include<stdio.h>
 reverse()
 {
   int num,r,rev=0;
   printf("Enter a number to find reverse: ");
   scanf("%d",&num);
   while(num)
   {
     r=num%10;
     rev=rev*10+r;
     num=num/10;
   }
   printf("Reversed of given number: %d",rev);
   //return 0;
 }
