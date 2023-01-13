#include<stdio.h>
#include"A.h"
void main()
{
   int r,a,l,b,h;
   float ac,at,as,pc,pt,ps;
   printf("Enter the side of traingle:");
   scanf("%d %d %d",&l,&b,&h);
   printf("Enter the side of sqaure:");
   scanf("%d",&a);
   printf("Enter the radius of circle:");
   scanf("%d",&r);
   ac=area_circle(r);
   pc=perimeter_circle(r);
   as=area_square(a);
   ps= primeter_sqaure(a);
   pt= perimeter_triangle(l,b,h);
   at=area_triangle(l,b);
   printf("\nPerimeter of Triangle =%.2f",pt);
   printf("\nPerimeter of Circle =%.2f",pc);
   printf("\nPerimeter of Sqaure  =%.2f",ps);
    printf("\nArea of Triangle=%.2f",at);
   printf("\nArea of Circle=%.2f",ac);
   printf("\nArea of Square=%.2f",as);
}