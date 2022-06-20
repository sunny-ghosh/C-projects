#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[5],b[5],c[5]={0,0,0,0,0};
//  clrscr();
 printf("Enter the values for the 1st array :- \n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the values for the 2nd  array :- \n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&b[i]);
 }
 for(i=0;i<5;i++)
 {
  c[i]=a[i]+b[i];
 }
 printf("The addition of two arrays is :- \n");
 for(i=0;i<5;i++)
 {
  printf("%d\t",c[i]);
 }
 getch();
}


// ***************ALGORITHM**************** //
// Step1 : Start.
// Step2 : Declare the integer typed variable named 'i' along with the three same size arrays named 'a','b','c' and sized 5.
// Step3 : Run a for loop of 'i' starting with 0 upto i<5 in increment way to take the values as the inputs for the array 'a'. 
// Step4 : Again run the same loop to take the values as the inputs for the array 'b'. 
// Step5 : Again run the same loop to perform the addition of two arrays 'a' and 'b' and store the result in the array 'c'.
 // Step6 : Again run the same loop to Print the array 'c'.
// Step7 : Stop.