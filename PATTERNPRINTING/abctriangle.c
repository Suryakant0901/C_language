#include<stdio.h>
int main()
{
    int n,a;
    printf("enter the no of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i;j++)
       
        printf(" ");
       {
          for(int k=1;k<=i;k++)
            
            printf("%c",i+64);
            
            
        }
        printf("\n");
    }
}