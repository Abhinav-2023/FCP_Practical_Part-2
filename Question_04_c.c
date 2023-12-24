#include <stdio.h>
#include <string.h>

void StringConcatenate(char str1[], char str2[])
{
    strcat(str1,str2);
}

int main()
{
    char string1[100];
    char string2[100];

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the Second string: ");
    scanf("%s", string2);

    StringConcatenate(string1, string2);

    printf("Concatenated string: %s\n", string1);
}