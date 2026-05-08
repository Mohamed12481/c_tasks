#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[100];
    char arr2[100];
    printf("Enter string 1: ");
    fgets(arr1, sizeof(arr1), stdin);
    arr1[strcspn(arr1, "\n")] = ',';
    printf("Enter string 2: ");
    fgets(arr2, sizeof(arr2), stdin);
    arr2[strcspn(arr2, "\n")] = '\0';
    strcat(arr1, arr2);
    printf("string after concatenate: %s", arr1);
    return 0;
}