#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the no of rows");
    scanf("%d",&n);
     printf("enter the no of columns");
    scanf("%d",&m);
   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
          if(i==3||j==3) printf("*");
          else printf("#");
            
        }
        printf("\n");
    }

    return 0;
        
}