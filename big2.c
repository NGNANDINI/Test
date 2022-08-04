# include <stdio.h>
biggest()
{
 int a,b;
 a=b=0;
 
 printf("Enter First no....:");
 scanf("%d",&a);
 
 printf("Enter Second no...:");
 scanf("%d",&b);
 
 
 if(a>b)
   printf("Heyyy %d is big....",a);
 else
   printf("Heyyy %d is big....",b);
     
 printf("\n");
}
