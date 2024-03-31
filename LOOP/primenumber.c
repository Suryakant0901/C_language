#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",n);
    int a=1;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        a=0;
        break;
    }          
    if(a==0)
    {
        printf("the given number is prime\n");

    }
    else{
        printf("the given number is composite\n");

    }
    return 0;

}