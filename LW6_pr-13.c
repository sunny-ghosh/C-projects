                         //*** INSERTION SORT ***//

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
    for(i=0;i<n;i++)
    {
        temp = arr[i];
        for(k=(i-1);k>=0;k--)
        {
            if(temp<arr[k])
            {
                arr[k+1] = arr[k];
            }
            else
                break;
        }
        arr[k+1] = temp;
    }
    printf("Sorted list of elements present in the array :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    // getch();
}




