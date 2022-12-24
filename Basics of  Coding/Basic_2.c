#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\nprogram Starts");
    
    printf("\nEnter value of a -");
    scanf("%d",&a);
     printf("\nEnter value of b -");
    scanf("%d",&b);
    printf("\nBefore swaping a=%d and b=%d",a,b);
     c=a;
     a=b;
     b=c;
    printf("\nAfter swaping a=%d and b=%d",a,b); 
    printf("\n End program");
}
