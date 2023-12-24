#include <stdio.h>

void main()
{
    FILE *fp;
    char data[100];

    fp = fopen("Assignment.txt", "a");

    printf("Enter data to append in the file: \n");
    gets(data);

    fprintf(fp, "%s", data);

    fclose(fp);

    printf("Data appended to the file successfully");
}