#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first no");
    scanf("%d",&a);
    printf("enter the second no");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}