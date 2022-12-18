// Q: W.A.P in C to find out the single or consecutive numbers from an array with sum 0 and print "1", otherwise "0". //

#include<stdio.h>
int main()
{
    int size,i,sum=0;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the items in the array :-\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    if(sum==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}