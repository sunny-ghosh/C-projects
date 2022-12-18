// Algorithm of Bit Stuffing :-----------------------------------
// Stepl: Start the program.
// Step 2: Include all the header files.
// Step 3: Declare two files pointers for opening the input file in read mode and the output in write mode.
// Step 4: Read the content of the input file.
// Step 5: If the bit is 1, then check for four continuously 1,s.
// Step 6: If so then, stuff a bit 0 at that position (1.e. after five consecutive 1's)
// Step 7: open the output file and print the stuffed string.
// Step 8: Stop the program.





// Code of Bit Stuffing :----------------------------------------------------

#include<stdio.h>
#include<string.h>
int main()
{
    int x[20],y[30],i,j,k,count,n;
    printf("Enter frame size : ");
    scanf("%d",&n);
    printf("Enter the frame in the form of 0 and 1 :-\n");
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    i=0;
    count=1;
    j=0;
    while(i<n)
    {
        if(x[i]==1)
        {
            y[j]=x[i];
            for(k=i+1; x[k]==1 && k<5; k++)
            {
                j++;
                y[j]=x[k];
                count++;
                if(count==5)
                {
                    j++;
                    y[j]=0;
                }
                i=k;
            }
        }
        else
        {
            y[j]=x[i];
        }
        i++;
        j++;
    }
    printf("After Bit Stuffing :-\n");
    for(i=0; i<j; i++)
        printf("%d",y[i]);
    return 0;
}

