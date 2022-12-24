#include<stdio.h>
void main()
{
    int j;
    printf("Enter till which digit odd numbers are needed ");
    scanf("%d",&j);
    for(int i=1;i<=j;i++)
    {
      if(i%2!=0)
      printf("%d ",i);
      
      else
       continue; ;
      

    }
}