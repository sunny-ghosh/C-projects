                         //*** QUICK SORT ***//

#include<stdio.h>
#include<conio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);
void main()
{
    int arr[10],i,n,ub,lb;
    // clrscr();
    printf("Enter the number of total elements in the array :- ");
    scanf("%d",&n);
    printf("Enter %d elements :-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    lb=0;
    ub=n;
    quicksort(arr,lb,ub);
    printf("Sorted list of elements present in the array :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    // getch();
}
void quicksort(int arr[],int lb,int ub)
{
    int j;
    if(ub>lb)
    {
        j=partition(arr,lb,ub);
        quicksort(arr,lb,j-1);
        quicksort(arr,j+1,ub);
    }
}
int partition(int arr[],int lb,int ub)
{
    int k,p,q,t;
    p=lb+1;
    q=ub;
    k=arr[lb];
    while(q>=p)
    {
        while(arr[p]<k)
            p++;
        while(arr[q]>k)
            q--;
        if(q>p)
        {
            t=arr[p];
            arr[p]=arr[q];
            arr[q]=t;
        }
    }
    t=arr[lb];
    arr[lb]=arr[q];
    arr[q]=t;
    return q;
}