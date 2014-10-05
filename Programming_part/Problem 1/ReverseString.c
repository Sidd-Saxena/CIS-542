#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Reverse.h"

int main()
{
//Dynamically allocating memory for character array
char *name;
name=malloc(20 * sizeof(char));

//Taking the name input from the user
printf ("Enter your name \n");
scanf ("%[^\t\n]s", name);
//display the name entered by the user
printf("Your name is  %s\n",name );
//calculate the length of the string
int len = strlen(name);

//declaring the token
char *token;
token = strtok(name," ");
char *temp;
int token_no=-1;
printf("Reverse of your name is  ");
//loop to break the string into small token
while( token!= NULL)
{
	temp=token;
	//calling the reverse function for each token and printing it out
	printf("%s", Rev_string(temp));
	printf("%s"," " );
	//calculating the number of white spaces
	token=strtok(NULL," ");
	token_no=token_no+1;
}
//calculating the number of non white characters
int no_characters= len - token_no;
printf("\n");
//displaying the non white characters
printf("The number of character entered by user is  %d\n",no_characters);
printf("\n");
return(0);
}

