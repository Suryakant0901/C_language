#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter a number :");
    scanf("%d",&n);
    int a=1;
    int b=1;
    for(i=1;i<=n-2;i++) {
        sum=a+b;
        a=b;
        b=sum;
        printf("the %dst fibonacci is:%d",n,sum);
    }
}