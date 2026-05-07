#include <stdio.h>

#define MAX 500

int multiply(int x, int arr[], int size)
{
    int carry = 0;

    for (int j = 0; j < size; j++)
    {
        int product = (arr[j] * x) + carry;
        arr[j] = product % 10;
        carry = product / 10;
    }

    while (carry)
    {
        arr[size] = carry % 10;
        carry = carry / 10;
        size++;
    }

    return size;
}

void calculateFactorial(int num)
{
    int arr[MAX];
    arr[0] = 1;
    int size = 1;

    for (int i = 2; i <= num; i++)
    {
        size = multiply(i, arr, size);
    }

    printf("The factorial of number %d = ", num);
    for (int i = (size - 1); i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int num = 0;

    printf("Enter number to get its factorial: ");
    do
    {
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Invalid number, enter is again: ");
        }
        
    } while (num < 0);

    calculateFactorial(num);

    return 0;
}