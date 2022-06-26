// Q: W.A.P in c to take an array containing positive integer values upto n as input and find the missing element within that range. //

#include<stdio.h>
#include<conio.h>
int MissingNumber(int a[],int x)
{
    int i,j,m;
    for(i=1;i<x;i++)
    {
        for(j=i;j<x-1;j++)
        {
            if(a[i]!=a[j])
            {
                m=i;
                break;
            }
        }
    }
    return m;
}
void main()
{
    int MissingNumber(int [],int);
    int n,size,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    size = n-1;
    int arr[size];
    printf("Enter the items in the array :-\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num = MissingNumber(arr,n);
    printf("The missing number in the array is %d",num);
    getch();
}