// ''' Draw the pattern - 
//                           C
//                           C O
//                           C O M
//                           C O M P
//                           C O M P U
//                           C O M P U T
//                           C O M P U T E
//                           C O M P U T E R
// '''

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char a[50];
    printf("Enter the string : ");
    gets(a); 
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",a[j]);
        }
        printf("\n");
    }
}

