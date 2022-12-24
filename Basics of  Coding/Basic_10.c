#include<stdio.h>
void main()
{
   int n,n1,n2;
   printf("Enter 3 Numbers ");
   scanf("%d%d%d",&n,&n1,&n2);
   if(n1>=n2&&n1>n)
   printf("%d is greater",n1);
   else if(n2>n1&&n2>n)
   printf("%d is Greater",n2);
    else
   printf("%d is greater",n);
    
}