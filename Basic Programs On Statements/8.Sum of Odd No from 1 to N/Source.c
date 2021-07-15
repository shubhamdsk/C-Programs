// Q- Write a C Program for Sum of Odd Numbers from 1 to N Using for Loop

#include <stdio.h>
#include <conio.h>

int main()
{   
    // initialize and declare the local variables
    int i, n, sum=0;

    //  Input range to find sum of odd numbers 
    printf("Enter upper limit: ");
    scanf("%d", &n);

    //  Find the sum of all odd number 
    for(i=1; i<=n; i=i+2)
    {
        //Add current odd number to sum 
        sum = sum + i;
    }
    printf("Sum of odd numbers = %d", sum);

    getch();
}