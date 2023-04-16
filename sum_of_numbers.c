// Ask the user to enter a number and write a program that prints the sum of the numbers from 1 to the entered number.

#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    
    int total = 0;
    int i;
    for (i = 1; i <= number; i++)
    {
        total = total + i;
    }
    printf("The sum of the numbers from 1 to %d is:\n", number);
    for (i = 1; i < number; i++)
    {
        printf("%d+", i);
    }
    printf("%d = %d\n", number, total);
}

