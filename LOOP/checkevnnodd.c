#include<stdio.h>
int main()
{
    int i;
    printf("enter a no:");
    scanf("%d",&i);
    if(i%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
    return 0;

}