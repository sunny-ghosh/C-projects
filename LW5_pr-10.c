                         //*** LINEAR SEARCHING ***//

#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[50],i,n,key;
    // clrscr();
    printf("Enter the number of total elements in the array :- ");
    scanf("%d",&n);
    printf("Enter %d elements :-\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the element to be searched in the array :- ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
            break;
    } 
    if(i<n)
    {
        printf("The element has been found at %d position in the array.",i);
    }
    else
    {
        printf("The element does not exist in the array.");
    }
    // getch();
}