#include <stdio.h>
#include <stdlib.h>

// Function to convert integer to
// character array
char *convertIntegerToChar(int N)
{

    // Count digits in number N
    int m = N;
    int digit = 0;
    while (m)
    {

        // Increment number of digits
        digit++;

        // Truncate the last
        // digit from the number
        m /= 10;
    }

    // Declare char array for result
    char *arr;

    // Declare duplicate char array
    char arr1[digit];

    // Memory allocation of array
    arr = (char *)malloc(digit);

    // Separating integer into digits and
    // accommodate it to character array
    int index = 0;
    while (N)
    {

        // Separate last digit from
        // the number and add ASCII
        // value of character '0' is 48
        arr1[++index] = N % 10 + '0';

        // Truncate the last
        // digit from the number
        N /= 10;
    }

    // Reverse the array for result
    int i;
    for (i = 0; i < index; i++)
    {
        arr[i] = arr1[index - i];
    }

    // Char array truncate by null
    arr[i] = '\0';

    // Return char array
    return (char *)arr;
}

// Driver Code
int main()
{

    // Given number
    int N;
    printf("enter n:");
    scanf("%d",&N);
    int len = 5;

    // Function call
    char *arr = convertIntegerToChar(N);

    // Print char array
    for (int i = 0; i < len; i++)
        printf("%c, ", arr[i]);

    return 0;
}