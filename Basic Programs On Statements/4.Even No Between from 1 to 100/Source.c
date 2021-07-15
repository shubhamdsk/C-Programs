// Q- C program to print all even numbers from 1 to 100 using for loop
 
#include <stdio.h>
int main()
{
    int i;
    printf("Even numbers between 1 to 100\n"); 

    //  Start loop i from 1, increment it by 1, will iterate till 100
    
    for(i=1; i<=100; i++)
    {
        //  Check even condition before printing 
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}