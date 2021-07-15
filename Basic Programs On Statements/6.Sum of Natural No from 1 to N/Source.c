// Q- Write a C Program for Sum of Natural Numbers from 1 to N Using while Loop

#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    // initialize and declare the local variables
    int num, i, sum = 0;  

    // take a value up to which find the sum of n natural number 
    printf("Enter a positive number : ");  
    scanf("%d", &num);  

    i = 0;  
    
    // define the while loop and i should be less than num 
    while (i <= num)  
    {  
        sum = sum + i; // store the sum of natural number  
        i++; // increment by 1  
    }  

    // print the sum of natural number  
    printf(" \nSum of first %d natural number is : %d", num, sum);  
    getch();  
}  

