#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the no of rows:");
    scanf("%d",&n);
    printf("enter the no of colomns:");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for( j=1;j<=m;j++)
        {
           printf("*");
        }

    }
      printf("\n");

     return 0;

}