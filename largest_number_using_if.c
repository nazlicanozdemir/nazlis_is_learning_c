// Write a program that asks the user for 3 numbers and prints the largest of these numbers and continues to do so.

#include <stdio.h>

int main()
{
    while (1) // for the program to continue
    {
        int n1, n2, n3;
        
        printf("Please enter 3 integer numbers: ");
        scanf("%d %d %d", &n1, &n2, &n3);
        
        if (( n1 == n2 ) & (n2 == n3))
        {
            printf("Entered numbers are all equal to each other.\n");
        }
        else if ( (n1 == n2) & (n1 > n3))
        {
            printf("%d is the largest among entered numbers.\n", n1);
        }
        else if ( (n1 == n3) & (n1 > n2) )
        {
            printf("%d is the largest among entered numbers.\n", n1);
        }
        else if ( (n2 == n3) & (n2 > n1) )
        {
            printf("%d is the largest among entered numbers.\n", n2);
        }
        else if ( (n1 > n2) & (n1 > n3) )
        {
            printf("%d is the largest among entered numbers.\n", n1);
        }
        else if ( (n2 > n1) & ( n2 > n3) )
        {
            printf("%d is the largest among entered numbers.\n", n2);
        }
        else
        {
            printf("%d is the largest among entered numbers.\n", n3);
        }
        printf("\n");
    }
}

// There are shorter ways to write this code but I wanted everything to be clear <3
