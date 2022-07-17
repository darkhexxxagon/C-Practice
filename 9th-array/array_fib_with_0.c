//enter the size of the array and the program only return an multidim array 
//with the firts 10 numbers, then put zeros in the other spaces
#include <stdio.h>
int fib(int n)
{
    return (n == 1 || n == 2) ? 1 : (fib(n - 1) + fib(n - 2));
}
void print_2d_array(int rows, int cols, int a[][cols])
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(void)
{
    int rows, cols, c = 1;
    printf("Give me the array rows x cols dimensions:\n");
    printf("rows:");
    scanf("%d", &rows);
    printf("cols: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            if (c < 10)
            {
                arr[i][j] = fib(c);
                c++;
            }
            else
                arr[i][j] = 0;
        }
    }
    print_2d_array(rows, cols, arr);
}
