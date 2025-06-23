#include <stdio.h>

int main()
{
    int choice;
    do
    {

        float a1, a2, result;
        printf("Enter which operation you want to perform \n 1.Addition \n 2.Subtract \n 3.Multiply \n 4.Divide \n 5.Modulus \n 6.Power\n 7.Exit \n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter the first number \n");
            scanf("%f", &a1);
            printf("Enter the second number\n");
            scanf("%f", &a2);
            result = a1 + a2;
            printf("The sum is %0.2f \n", result);
        }
        else if (choice == 2)
        {
            printf("Enter the first number \n");
            scanf("%f", &a1);
            printf("Enter the second number\n");
            scanf("%f", &a2);
            result = a1 - a2;
            printf("The substracted value is %0.2f \n", result);
        }
        else if (choice == 3)
        {
            printf("Enter the first number \n");
            scanf("%f", &a1);
            printf("Enter the second number\n");
            scanf("%f", &a2);
            result = a1 * a2;
            printf("The multiply is %0.2f \n", result);
        }
        else if (choice == 4)
        {
            printf("Enter the first number \n");
            scanf("%f", &a1);
            printf("Enter the second number\n");
            scanf("%f", &a2);
            if (a2 == 0)
            {
                printf("Invalid statement");
            }
            else
            {
                result = a1 / a2;
                printf("The division is %0.2f \n", result);
            }
        }
        else if (choice == 5)
        {
            printf("Enter the first number \n");
            scanf("%f", &a1);
            printf("Enter the second number\n");
            scanf("%f", &a2);
            result = fmod(a1, a2);
            printf("The modulus if %0.2f \n", result);
        }
        else if (choice == 6)
        {
            printf("Enter the first number \n");
            scanf("%f", &a1);
            printf("Enter the second number\n");
            scanf("%f", &a2);
            result = pow(a1, a2);
            printf("The power func is %0.2f \n", result);
        }
        else if (choice == 7)
        {
            break;
        }
        else
        {
            printf("Invalid choice");
        }
    } while (choice != 7);
}