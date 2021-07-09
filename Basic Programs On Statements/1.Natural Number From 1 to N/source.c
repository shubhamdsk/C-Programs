// Q:-Write a C Program to Print Natural Numbers from 1 to N using For Loop 
 
#include<stdio.h>
#include<conio.h>

int main()
{
  	int Num;
	int i;
  
  	printf("\n Please Enter any Integer Value  : ");
  	scanf("%d", &Num);
  	
  	printf("\n List of Natural Numbers from 1 to %d: \n", Num);  	
	for(i = 1; i <= Num; i++)
  	{
    	printf(" %d\t\n", i);
  	}
  
  	return 0;
	getch();
}
