#include<stdio.h>
void swap(int* x,int* y)
{
  int temp=*x;
   *x=*y;
   *y=temp;
   return;

}
int main()
{
    int a=5;
    int b=6;
    swap(&a,&b);
    printf("the value a is=%d\n",a);
    printf("the value b is=%d",b);
    return 0;
}