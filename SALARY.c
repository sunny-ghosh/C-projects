#include<stdio.h>
#include<conio.h>
void main()
{
 int bs,pf;
 float dh,da,hra,tax,gs,ns;
 clrscr();
 printf("Enter the duty hours : ");
 scanf("%f",&dh);
 if(dh==8.0)
 {
  bs=10000;
  pf=500;
  da=(bs*5.0)/100.0;
  hra=(bs*10.0)/100.0;
  tax=(bs*5.0)/100.0;
  gs=(bs+da+hra);
  ns=(gs-tax-pf);
  printf("The gross salary is %f .\nThe net salary is %f .",gs,ns);
 }
 else if((dh>8.0)&&(dh<=10.0))
 {
  bs=10000;
  pf=1000;
  da=(bs*10.0)/100.0;
  hra=(bs*15.0)/100.0;
  tax=(bs*10.0)/100.0;
  gs=(bs+da+hra);
  ns=(gs-tax-pf);
  printf("The gross salary is %f .\nThe net salary is %f .",gs,ns);
 }
 else if((dh>10.0)&&(dh<=12.0))
 {
  bs=10000;
  pf=1000;
  da=(bs*15.0)/100.0;
  hra=(bs*20.0)/100.0;
  tax=(bs*15.0)/100.0;
  gs=(bs+da+hra);
  ns=(gs-tax-pf);
  printf("The gross salary is %f .\nThe net salary is %f .",gs,ns);
 }
 else
 {
  printf("Input is Invalid");
 }
 getch();
}