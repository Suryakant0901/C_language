#include<stdio.h>
int main()
{
    int arr[5]={3,4,5,10 ,6};
    int min;
    for(int i=0;i<=4;i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}