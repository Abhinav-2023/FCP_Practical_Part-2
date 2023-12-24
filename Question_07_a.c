#include <stdio.h>

void main()
{
    FILE *fp;
    char data[100];

    fp = fopen("Assignment.txt", "w");

    printf("Enter data to the file: \n");
    gets(data);

    fprintf(fp, "%s", data);

    fclose(fp);

    printf("Data written to the file successfully\n");
}