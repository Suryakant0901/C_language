#include<stdio.h>
int factorial(int x){

   int fact =1;
   for(int i=2;i<=x;i++)
   {
    fact=fact*i;
   }
     return fact;
}
int combination(int n,int r)
{
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;

 }
 int main(){
    int rows;
    printf("enter the no of rows:");
    scanf("%d",&rows);
    for(int i=0;i<=rows;i++)
    {
        for(int j=0;j<=rows-i;j++)
         printf("  ");

            for(int j=0;j<=i;j++)
            printf(" %3d", combination(i, j));
        
        printf("\n");
    }
    return 0;
 }