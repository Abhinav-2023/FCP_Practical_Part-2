#include <stdio.h>
#include <string.h>

int IsPalindrome(char str[])
{
    int length = strlen(str);
    for(int i = 0, j = length - 1; i <j; i++, j--)
    {
        if(str[i] != str[j])
        return 0;
    }
    return 1;
}

void main()
{
    char InputString[100];

    printf("Enter a string: ");
    scanf("%s", InputString);

    if(IsPalindrome(InputString))
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");
}