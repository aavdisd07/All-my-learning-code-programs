#include<stdio.h>
void main()
{
   int a,b;
   printf("Program starts\n");
   printf("Enter value of a-");
   scanf("%d",&a);
   printf("\nEnter value of b-");
   scanf("%d",&b);
   printf("\nBefore swaping a=%d and b=%d",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n\nAfter swaping a=%d and b=%d",a,b);

}