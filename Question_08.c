#include <stdio.h>
#include <math.h>

void main()
{
    int choice;
    float num1, num2;

    while (1)
    {
        printf("0. Exit\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exponent\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            printf("Exiting\n");
            break;
        }

        printf("Enter two number: ");
        scanf("%f %f", &num1, &num2);

        switch (choice)
        {
            case 1:
                printf("Result: %f\n",num1 + num2);
                break;
            case 2:
                printf("Result: %f\n",num1 - num2);
                break;
            case 3:
                printf("Result: %f\n",num1 * num2);
                break;
            case 4:
                if(num2 !=0)
                    printf("Result: %f\n",num1 / num2);
                else
                    printf("Error");
                break;
            case 5:
                printf("Result: %f\n",pow(num1 , num2));
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    
}