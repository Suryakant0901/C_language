// #include<stdio.h>
// int main()
// {
//   int i;
//   for(i=1;i<=100;i++)
//   {
//      if(i%2==0)//even
//      {
//        continue;
//      }
//       printf("%d\n",i);
//   } 
// }

#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=100;i++)
  {
     if(i%2!=0)//odd
     {
       continue;
     }
      printf("%d\n",i);
  } 
}