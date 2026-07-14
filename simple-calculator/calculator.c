#include <stdio.h>

/**
 * main - Entry point for the simple calculator skeleton
 * Return: Always 0
 */
int main(void)
{
    int choice = -1;

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

        if (choice == 0)
        {
            printf("Bye!\n");
        }
    }

    return (0);
}

