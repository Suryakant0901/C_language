#include<stdio.h>
int main()
{
    int n,r=0;
    printf("enter a number:");
    scanf("%d",&n);
    int p=n;
    while(n!=0)
    {
         r=r*10;
         r=r+(n%10);
         n=n/10;
    }  
    int sum=p+r;
    printf("the number is reverse then sum of all digits:%d",sum);
    return 0;  
    
}