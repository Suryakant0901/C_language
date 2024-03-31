#include<stdio.h>
int main()
{
    int marks[10];
    for(int i=0;i<=9;i++)
    {
        printf("Enter the students marks:%d\n",i);
        scanf("%d",&marks[i]);
       
    }
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35) printf("%d ",marks[i]);
    }
    return 0;
} 
