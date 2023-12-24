#include <stdio.h>
#include <string.h>

int StringLength(char str[])
{
    return strlen(str);
}

void main()
{
    char InputString[100];

    printf("Enter a string: ");
    scanf("%s", InputString);

    int length = StringLength(InputString);

    printf("Length of string: %d\n", length);
}