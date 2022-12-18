// Q: W.A.P in c to take an array containing positive integer values upto n as input and find the missing element within that range. //

#include<stdio.h>
#include<conio.h>
int MissingNumber(int a[],int x)
{
    int i,j,m,b[x];
    for(j=0;j<x;j++)
    {
        b[j]=j+1;
    }
    for(j=0;j<x;j++)
    {
        for(i=0;i<j-1;i++)
        {
            if(a[i]!=b[j])
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
    int n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter the items in the array :-\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num = MissingNumber(arr,n);
    printf("The missing number in the array is %d",num);
    getch();
}