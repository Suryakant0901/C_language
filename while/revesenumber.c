#include<stdio.h>
int main()
{
    int n,i,r=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
         r=r*10;
         r=r+(n%10);
         n=n/10;
         
    }  
      printf("reverse number is:%d",r);
        
     return 0;  
    
}