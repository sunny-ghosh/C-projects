                         //*** BINARY SEARCHING ***//

#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],i,n,key,lo,hi,mid;
    // clrscr();
    printf("Enter the number of total elements in the array : ");
    scanf("%d",&n);
    printf("Enter %d elements :-\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched in the array : ");
    scanf("%d",&key);
    lo=0;
    hi=n-1;
    if(hi>=lo)
    {
      for(lo=0;lo<=hi;lo++)
      {
        mid = (lo + hi)/2;
        if(arr[mid]==key)
        {
          break;
          // printf("The element has been found at %d position in the array.",mid);
        }
        else if(arr[mid]>key)
        {
          hi = mid - 1;
          mid = (lo + hi)/2;
          if(arr[mid]==key)
            break;
            // printf("The element has been found at %d position in the array.",mid);
        }
        else
        {
          lo = mid + 1;
          mid = (lo + hi)/2;
          if(arr[mid]==key)
            break;
            // printf("The element has been found at %d position in the array.",mid);
        }
      }
      printf("The element has been found at %d position in the array.",mid);
    }
    else
    {
        printf("The element does not exist in the array.");
    }
    // getch();
}














































                  //***** Source Code copied from Avinobo sir *****//

                              //*** BINARY SEARCHING ***//


// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int arr[30],i,n,key,lo,hi,mid;
//     // clrscr();
//     printf("Enter the number of total elements in the array : ");
//     scanf("%d",&n);
//     printf("Enter %d elements :-\n",n);
//     for(i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     printf("Enter the element to be searched in the array : ");
//     scanf("%d",&key);
//     lo=0;
//     hi=n-1;
//     mid = (lo + hi)/2;
//     while(lo<=hi)
//     {
//         if(arr[mid]==key)
//         {
//             printf("The element has been found at %d position in the array.",mid);
//         }
//         else if(arr[mid]>key)
//         {
//             hi = mid - 1;
//             mid = (lo + hi)/2;
//             if(arr[mid]==key)
//             {
//                 i=mid;
//                 printf("The element has been found at %d position in the array.",mid);
//             }
//         }
//         else if(arr[mid]<key)
//         {
//             lo = mid + 1;
//             mid = (lo + hi)/2;
//             if(arr[mid]==key)
//             {
//                 printf("The element has been found at %d position in the array.",mid);
//             }
//         }
//         else
//         {
//             printf("The element does not exist in the array.");
//         }
//     }
//     // getch();
// }















































                             //*** Alternative Source Code ***//

                   //*** BINARY SEARCHING ***//


// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int binary(int [],int,int,int);
// void main()
// {
// int a[30];
// int ch,i,n,ele,key;
// clrscr();
// printf("Enter the no. of elements: ");
// scanf("%d",&n);
// printf("Enter the elements: ");
// for(i=0;i<n;i++)
// scanf("%d",&a[i]);
// printf("\n\t\t\t-:BINARY SEARCHING:-\n1. Search\n2. Exit");
// while(1)
// {
// printf("\n\nEnter your choice:");
// scanf("%d",&ch);
// switch(ch)
// {
// case 1: printf("Enter the element to be searched: ");
// scanf("%d",&key);
// ele=binary(a,0,n-1,key);
// if(ele==-1)
// printf("The element does not exist in the array.");
// else
// printf("The element is at position %d in the array.",ele+1);
// break;
// case 2: exit(1);
// default: printf("Invalid Choice! Try Again.");
// break;
// }
// }
// }
// int binary(int a[],int low,int high,int key)
// {
// int mid;
// if(low>high)
// return(-1);
// mid=(low+high)/2;
// if(a[mid]==key)
// return(mid);
// else if(a[mid]>key)
// return(binary(a,low,mid-1,key));
// else
// return(binary(a,mid+1,high,key));
// }