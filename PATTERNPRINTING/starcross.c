#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the num of rows:");
    scanf("%d",&n);
    printf("enter the num of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==j||i+j==6) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}