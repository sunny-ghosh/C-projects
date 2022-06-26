// Q: W.A.P in c to find the leaders in the array. //

#include<stdio.h>
#include<conio.h>
void main()
{
    int size,i,j;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the items in the array :-\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The leaders in the array :-\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
                break;
        }
        if(j==size)
        {
            printf("%d  ",arr[i]);
        }
    }
    getch();
}