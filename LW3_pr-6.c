                         //*** Tower of Hanoi ***//

#include <stdio.h>
#include<conio.h>
void towers(int, char, char, char);
void main()
{
    int num;
    // clrscr();
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :-");
    towers(num, 'A', 'C', 'B');
    // getch();
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\nMove disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\nMove disk %d from peg %c to peg %c",num,frompeg,topeg);
    towers(num - 1,auxpeg,topeg,frompeg);
}