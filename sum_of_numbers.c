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
    for (i = 1; i < number; i++) // i wrote "i < number" instead of "i <= number" this time to avoid sth like "1+2+3+=6"
    {
        printf("%d+", i);
    }
    printf("%d = %d\n", number, total); //i added the last number outside of the for loop
}

