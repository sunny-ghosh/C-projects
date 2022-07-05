// W.A.P in C to create a simple calculator. //  

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int ch;
    float n1,n2,n,per;
    printf("Enter the first number ==> ");
    scanf("%f",&n1);
    printf("Enter the second number ==> ");
    scanf("%f",&n2);
    printf("Enter an another number ==> ");
    scanf("%f",&n);
    printf("1 : Addition\n2 : Substraction\n3 : Multiplication\n4 : Division\n5 : Remainder\n6 : Percentage\n7 : Square Root\n8 : Square\n9 : Inverse\n10 : Power Off\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1 : printf("The required sum of %f & %f is %f .",n1,n2,(n1+n2));
	          break;
     case 2 : printf("The required difference between %f & %f is %f .",n1,n2,(n1-n2));
	          break;
     case 3 : printf("The required product of %f & %f is %f .",n1,n2,(n1*n2));
	          break;
     case 4 : printf("The required quotient of division of %f & %f is %f .",n1,n2,(n1/n2));
	          break;
     case 5 : printf("The required remainder of division of %f & %f is %f .",n1,n2,fmod(n1,n2));                           // fmod(numerator,denominator) is used to perform the modulus division of two float numbers.
	          break;
     case 6 : printf("Enter the value of percentage : ");
              scanf("%f",&per);
	          printf("%f percent of %f is %f .",per,n,(n*(per/100.0)));
	          break;
     case 7 : printf("The required value of square root of %f is %f .",n,sqrt(n));
	          break;
     case 8 : printf("The value of the square of %f is %f .",n,pow(n,2));
	          break;
     case 9 : printf("The required inverse of %f is %f .",n,(1/n));
	          break;    
     case 10: exit(0);         
     default: printf("Invalid Input! Please enter the correct input from the menu.");
    }
    return 0;
}