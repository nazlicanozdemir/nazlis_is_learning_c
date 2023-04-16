// Write a program that ask for an integer number from the user and prints whether the number is odd or even and continues to do so.

#include <stdio.h>

int main()
{
    while (1)
    {
        int number;
        printf("Enter an integer number: ");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf("Entered number is an even number.\n");
        }
        else
        {
            printf("Entered number is an odd number.\n");
        }
        printf("\n");
    }
}
