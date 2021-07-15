// Q- Write a C Program for Sum of Even Numbers from 1 to N Using for Loop
 

#include <stdio.h>
#include <conio.h>

void main()
{   
     // initialize and declare the local variables
    int i, n, sum=0;

    // Input upper limit from user 
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i=i+2)
    {
        //Add current even number to sum 
        sum = sum + i;
    }

    // print the sum of even number
    printf("Sum of all even number between 1 to %d = %d", n, sum);

    getch();
}