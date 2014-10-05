    #include <stdio.h>
	#include <stdlib.h>
	#include <time.h>
    #include <sys/types.h>
    #include "timedifference.h"

	int main ()
	{
		time_t start,end;
	    //double length;
        int number, input;
		int count=10;
		/* initialize random seed: */
		srand ( time(NULL) );
		/* Generate a random number: */
		number = rand() % 100 + 1;
		
        //start the timer 
		time(&start);
		do {
			    //take input from the user about guessing the number
				printf (" Guess the number (1 to 100): ");
				scanf ("%d",&input);
				//various conditions to check weather the guessed number from user is smaller or higher
				if ((number)< input && input < (number+10))
					printf ("The number is smaller\n");
				else if ((number-10)< input && input< (number))
					printf ("The number is higher\n");
				else if (input > number)
					printf("The number is much smaller\n");
                else if (input < number)
					printf("The number is much higher\n");
				else
					printf("\n");
                //reducing the count everytime user guesses a number
				count=count-1;
				//cond=(number!=input);
				//printf("%d Count \n",cond);
			} while (number!=input && count!=0);
		//end the time when the loop ends
         time(&end);
         printf("You finished the game at  ");
         printf("%s\n",ctime(&end) );
         //length = difftime(end,start);
         //checking if the user won or lost depending on the conditions
			if (count!=0)
			{
				//calling the function to calculate the time taken by the user
				printf("You Won and finished in %f",timedifference(end,start));
				//printf("You Won and finished in %d",length);
			    printf(" seconds and took %d",(10-count));
			    printf(" attempts\n");
			}
			else
			{
				//calling the function to calculate the time taken by the user
				printf ("You LOST and took %f",timedifference(end,start));
				//printf ("You LOST and took %d",length);
				printf(" secs\n");
			}
		return 0;
	}

