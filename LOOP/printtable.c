#include<stdio.h>
int main()
{
    int i,n,x;
    printf("enter a nyumber:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        x=n*i;
        printf("%d\n",x);
    }
    return 0;


}