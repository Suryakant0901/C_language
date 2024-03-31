#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the first side :");
   scanf("%d",&a);
   printf("enter the second side:");
   scanf("%d",&b);
   printf("enter the third side:");
   scanf("%d",&c);
   if((a+b)>c && (b+c)>a && (c+a)>b)
   {
    printf("valid triangle");

   }
   else
   {
    printf("not valid triangle");

   }
   return 0;
}