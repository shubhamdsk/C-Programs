// Q- Write a C Program for Alphabet from a to z using for loop

#include <stdio.h>
int main() 

{
    char i;
    printf("Alphabet from a to z\n");

//  Start loop i from a, increment it by 1, will iterate till z
    for (i = 'a'; i <= 'z'; i++)
        printf("%c\n ", i);

    return 0;
}
