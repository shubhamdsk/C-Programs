//Q:- Write a C program to all natural numbers in reverse from N to 1 range using for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int start;
    int end;

    /* Input start and end limit from user */
    printf("Enter starting value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    // Run loop from 'start' to 'end' and decrement by 1 in each iteration. 
    for(i=start; i>=end; i--)
    {
        printf("%d\n", i);
    }

    return 0;
    getch();
}
