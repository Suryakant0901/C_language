#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)
    {
        printf("%d\n",i);

    }
    return 0;
}


#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=4;i<=3*n+1;i=i+3)
    {
        printf("%d\n",i);

    }
    return 0;


}