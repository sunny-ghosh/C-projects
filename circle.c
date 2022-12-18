// W.A.P in C to calculate the area & perimeter of a circle. //  

#include<stdio.h>
int main()
{
 int r;
 float a,p;
 printf("Enter the value of the radius of the circle : ");
 scanf("%d",&r);
 a=(3.14*r*r);
 p=(2*3.14*r);
 printf("The area of the circle is %f .\nThe perimeter of the circle is %f .",a,p);
 return 0;
}