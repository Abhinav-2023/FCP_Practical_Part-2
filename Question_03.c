#include <stdio.h>

void ReverseString(char str[])
{
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    for(int i = 0, j = length -1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
void main()
{
    char InputString[100];

    printf("Enter a string:");
    scanf("%s", InputString);

    ReverseString(InputString);

    printf("Reversed string: %s\n", InputString);
}