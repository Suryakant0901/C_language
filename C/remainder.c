#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    int q=a/b;
    int r= a-(b*q);
    printf("remainder is:%d",r);
    return 0;

}