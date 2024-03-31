#include<stdio.h>
int main()
{
     int a,b,c;
     printf("enter first no:");
     scanf("%d",&a);
     printf("enter second no:");
     scanf("%d",&b);
     printf("enter third no:");
     scanf("%d",&c);
     if(a>b){
        if(a>c)
        printf("%d is gretest",a);
     }
     else{
        if(b>c)
        printf("%d is gretest",b);
     }
      printf("%d is gratest",c);
     
     return 0;

}