#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("divisible by five");

    }
    else
    {
         printf("not divisible by five");

    }
     return 0;

}