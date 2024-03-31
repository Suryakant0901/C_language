#include<stdio.h>
void satna(){
    printf("you are in satna\n");
    return;
}
void rewa(){
    printf("you are in rewa\n");
    satna();
    return;
}
void umaria()
{
    printf("you are in umaria\n");
    rewa();
    return;
}
int main(){
    umaria();
    return 0;
}