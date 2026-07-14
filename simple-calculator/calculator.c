#include <stdio.h>

/**
 * main - Entry point for the simple calculator
 * Return: Always 0
 */
int main(void)
{
    int choice = -1;
    int a, b;

    while (choice != 0)
    {
        printf("Simple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
        {
            /* If input is not an integer, break to avoid an infinite loop */
            break;
        }

        /* Check if choice is the quit option */
        if (choice == 0)
        {
            printf("Bye!\n");
        }
        /* Option 1: Addition */
        else if (choice == 1)
        {
            printf("A: ");
            if (scanf("%d", &a) != 1)
                break;
            printf("B: ");
            if (scanf("%d", &b) != 1)
                break;
            printf("Result: %d\n", a + b);
        }
        /* Option 2: Subtraction */
        else if (choice == 2)
        {
            printf("A: ");
            if (scanf("%d", &a) != 1)
                break;
            printf("B: ");
            if (scanf("%d", &b) != 1)
                break;
            printf("Result: %d\n", a - b);
        }
        /* Option 3: Multiplication */
        else if (choice == 3)
        {
            printf("A: ");
            if (scanf("%d", &a) != 1)
                break;
            printf("B: ");
            if (scanf("%d", &b) != 1)
                break;
            printf("Result: %d\n", a * b);
        }
        /* If the choice is not 0, and not within the valid range (1-4) */
        else if (choice < 1 || choice > 4)
        {
            printf("Invalid choice\n");
        }
    }

    return (0);
}
