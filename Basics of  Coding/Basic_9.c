#include<stdio.h>
void main()
{
   int data;
   printf("enter the days-");
   scanf("%d",&data);
   int year=data/365;
   int week=(data%365)/7;
   int days=((data%365))%7;
   printf("%d days means ->\n%d years\n%d weeks\n%d days",data,year,week,days);

}