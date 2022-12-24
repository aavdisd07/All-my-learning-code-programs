#include<stdio.h>
void main()
{
    int a,b,mul=0;
    printf("Enter the values for a and b-");
    scanf("%d%d",&a,&b);
    if(b<0)
    {
       a=a+b;
       b=a-b;
       a=a-b;

    }
    if(a>=0)
    {
     for(int i=1;i<=a;i++)
     {
       mul+=b;

     }
    }
    if(a<0)
    {
       for(int i=a;i<=-1;i--)
       {
         mul-=b;

       }
    }
    printf("%d is Multiplication",mul);
    
}