#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the lenth");
    scanf("%d",&l);
    printf("enter the bidth");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);

    if(a>p)
    {
        printf("area is greater than parimeter ");

    }
     else
    {
        printf("area is not greater than parimeret ");

    }


       return 0;

}