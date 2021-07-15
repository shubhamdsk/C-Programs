// Q- Write a C Program for Odd numbers between 1 to 100 using while loop

#include <stdio.h>    
void main() 
{  
    int i; 
    printf("Odd numbers between 1 to 100\n");  
   
    //  Initialize i with first odd number 1, and increment it by 2 in every iteration. 
    i = 1;
    while (i <= 100) 
    {  
        printf(" %d\n ", i);

        // Add 2 to current odd number to get next odd number 
        i = i + 2;  
    }  
   
    getch(); 
} 
