#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,a[10],sum=0;
//  clrscr();
//  printf("Enter the size of an array : ");
//  scanf("%d",&n);
 printf("Enter the numbers for the array to get the sum of the numbers:- \n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
  sum=sum+a[i];
 }
 printf("The sum of the given numbers in the array is %d .",sum);
//  getch();
}



// ***************ALGORITHM**************** //
// Step1 : Start.
// Step2 : Declare the integer typed variables named 'i','n' and 'sum' initialized by 0 along with the array named 'a' and sized 10.
// Step3 : Run a for loop of 'i' starting with 0 upto i<10 in increment way to take the inputs of the numbers for the array to get their sum. 
// Step4 : Again run a previous loop to perform the addition of 'sum' initialized by 0 and the given numbers in the array and store the result in 'sum'.
// Step5 : Print the value of 'sum'.
// Step6 : Stop.