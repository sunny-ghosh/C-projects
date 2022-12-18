// Character Stuffing //
// ALGORITHM :-----------------
// Begin
// Step 1: Initialize I and j as 0
// Step 2: Declare n and pos as integer and a[20].b[50].ch as character
// Step 3: rcad the string a
// Step 4: find the length of the string n, i.e n-strlen(a)
// Step 5: read the position, pos
// Step 6: if pos >n then
// Step 7: print invalid position and read again the position, pos
// Step 8 end if
// Step 9: read the character, ch
// Step 10: Initialize the array b, b[0...5] as 'd', 'T, 'e, 's' ,'t, 'x' respcctivcly
// Step 11:j-6
// Step 12: Repeat step[(13to22) until is<n
// Step 13: if i-=pos-1 then
// Step 14: initialize b array,b[i],bfi+1]..bj+6] as'd', 'T, 'c','ch, 'd', 'i', 'e' respectively
// Step 15: inerement j by 7, i.e j-j+7
// Step 16: end if
// Step 17: if ali]=='d' and a[i+1]--T and afi+2]-'e then
// Step 18: initialize array b, b[13.. 15]-d', '1', 'c' respectively Step 19: increment j by 3, i.e j=j+3
// Step 20: end if
// Step 21: bbl-a[i
// Step 22: increment I and j;
// Step 23: initialize b aray,bj].bfit11...blit6l as'd', 1.'e' ,'e',t, 'x',\0" respectively
// Step 24: print frame after stiuffing
// Step 25: print b
// End


// Code of Character Stuffing :------------------------------------------------








#include<stdio.h>
#include<string.h>
#include<process.h>
int main()
{
    int i=0,j=0,n,pos;
    char a[20],b[50],ch;
    printf("Enter string : ");
    scanf("%s",&a);
    n=strlen(a);
    printf("Enter position : ");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Invalid position! Enter again : ");
        scanf("%d",&pos);
    }
    printf("Enter the character : ");
    ch=getche();
    b[0]='d';
    b[1]='l';
    b[2]='e';
    b[3]='s';
    b[4]='t';
    b[5]='x';
    j=6;
    while(i<n)
    {
        if(i==pos-1)
        {
            b[j]='d';
            b[j+1]='l';
            b[j+2]='e';
            b[j+3]=ch;
            b[j+4]='d';
            b[j+5]='l';
            b[j+6]='e';
            j=j+7;
        }
        if(a[i]=='d' && a[i+1]=='l' && a[i+2]=='e')
        {
            b[j]='d';
            b[j+1]='l';
            b[j+2]='e';
            j=j+3;
        }
        b[j]=a[i];
        i++;
        j++;
    }
    b[j]='d';
    b[j+1]='l';
    b[j+2]='e';
    b[j+3]='s';
    b[j+4]='t';
    b[j+5]='x';
    b[j+6]='\0';
    printf("\nframe after stuffing :- \n");
    printf("%s",b);    
    return 0;
} 