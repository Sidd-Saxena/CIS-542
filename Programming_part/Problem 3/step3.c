#include <stdio.h>
#include "prime.h"

int main()
{
	int number,i;
	//taking input from the user for the limit
	printf ("Enter a number ");
	scanf ("%d", &number);
	printf("\n");
	i=2;
	printf("The prime numbers are \n" );
	//loop to call the isprime function for each number till limit is reached
	do
	  {  
	  	//calling the function
  		int var=is_prime(i);
  		//if number is prime then print it
        if (var==1)
        {
        	printf("%d\n",i );
        }
  		i++;
	  }while(i!=number);

	return 0;
} 
