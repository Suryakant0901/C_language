#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=5-i;j++){
            printf("*");


        }
        printf("\n");
       
    }
    return 0;
}    