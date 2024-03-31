#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("enter the age of ram:");
    scanf("%d",&ram);
    printf("enter the age of shyam:");
    scanf("%d",&shyam);
    printf("enter the age of ajay:");
    scanf("%d",&ajay);

    if(ram>shyam){
        if(ram>ajay)
        printf("% is youngest",ram);
    }
    else{
        if(shyam>ajay)
        printf("%d is youngest",shyam);
    }
    printf("%d is youngest",ajay);

}    
