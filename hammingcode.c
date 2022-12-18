// Hamming Code generation for error detection and correction.----------------------------------

#include<stdio.h>
#include<math.h>
int input[32];                                // Store input bits
int code[32];                                 // Store hamming code
int ham_calc(int, int);
void solve(int input[], int);
int ham_calc(int position, int c_l)           // Function to calculate bit for i-th position
{
    int count = 0, i, j;
    i = position - 1;
    while(i < c_l)                            // Traverse to store Hamming Code
    {
        for(j = i; j < i + position; j++) 
        {
            if(code[j] == 1)                  // If current bit is 1
                count++;
        } 
        i = i + 2 * position;                 // Update i
    }
    if(count % 2 == 0)
        return 0;
    else
        return 1;
}
void solve(int input[], int n)                 // Function to calculate hamming code
{
    int i, p_n = 0, c_l, j, k;
    i = 0;
    while(n > (int)pow(2, i) - (i + 1))         // Find msg bits having set bit at x'th position of number.
    {
        p_n++;
        i++;
    }
    c_l = p_n + n;
    j = k = 0;
    for(i = 0; i < c_l; i++)                     // Traverse the msgBits
    {
        if(i == ((int)pow(2, k) - 1))            // Update the code
        {
            code[i] = 0;
            k++;
        }
 
        
        else                                     // Update the code[i] to the input character at index j
        {
            code[i] = input[j];
            j++;
        }
    }    
    for(i = 0; i < p_n; i++)                      // Traverse and update the hamming code 
    {
        int position = (int)pow(2, i);             // Find current position
        int value = ham_calc(position, c_l);       // Find value at current position
        code[position - 1] = value;                // Update the code
    }
    printf("\nThe generated Code Word is : ");       // Print the Hamming Code
    for(i = 0; i < c_l; i++) 
    {
        printf("%d", code[i]);
    }
}
int main()                                          // Driver Code
{
    input[0] = 0;                                    // Given input message Bit
    input[1] = 1;
    input[2] = 1;
    input[3] = 1;
    int N = 4;
    solve(input, N);                                 // Function Call
    return 0;
}

