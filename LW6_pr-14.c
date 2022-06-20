                         //*** Selection Sort ***//

#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],n,i,k,x,y;
    // clrscr();
    printf("Enter the number of total elements in the array :- ");
    scanf("%d",&n);
    printf("Enter %d elements :-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=(n-1);i>=0;i--)
    {
        y=0;
        x = arr[y];
        for(k=0;k<=i;k++)
        {
            if(arr[k]>x)
            {
                x = arr[k];
                y=k;
            }
        }
        arr[y] = arr[i];
        arr[i] = x;
    }
    printf("Sorted list of elements present in the array :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    // getch();
}













                         //*** Alternative Source Code ***//



// #include<stdio.h>
// #include<conio.h>
// #include<process.h>
// void selection(int x[],int n)
// {
// int i,index,j,large;
// for(i=n-1;i>0;i--)
// {
// large=x[0];
// index=0;
// for(j=1;j<=i;j++)
// if(x[j]>large)
// {
// large=x[j];
// index=j;
// }
// x[index]=x[i];
// x[i]=large;
// }
// }
// void main()
// {
// int a[20],n,i;
// // clrscr();
// printf("\nEnter no of elements to be sorted:");
// scanf("%d",&n);
// for(i=0;i<n;i++)
// {
// printf("\nEnter element[%d]:",i+1);
// scanf("%d",&a[i]);
// }
// selection(a,n);
// printf("\nThe sorted array is: ");
// for(i=0;i<n;i++)
// printf("%d ",a[i]);
// // getch();
// }