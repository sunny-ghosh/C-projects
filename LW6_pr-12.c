                         //*** BUBBLE SORT ***//

#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],n,i,k,temp;
    // clrscr();
    printf("Enter the number of total elements in the array :- ");
    scanf("%d",&n);
    printf("Enter %d elements :-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    printf("Sorted list of elements present in the array :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    // getch();
}















