#include <stdio.h>
#include <string.h>

int main()
{
    char *arr = "Hello world!";
    // wrong
    printf("the size of the arr is : %d\n", sizeof(arr));
    printf("the len of arr is : %d\n", sizeof(arr) - 1);

    // right
    printf("the size of the arr is : %d\n", strlen(arr));

    // right
    char arr2[] = "Hello world!";
    printf("the size of the arr is : %d\n", sizeof(arr2));
    printf("the len of arr is : %d\n", sizeof(arr2) - 1);
    printf("the size of the arr is : %d\n", strlen(arr2));

    return 0;
}