/**
 * Program 2
 * Finding primes using a number n supplied by the user via the command line
 * CS320 - Fall 2018
 * 9/23/18 cssc0504 Robert Carpenter
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
typedef int bool;
#define true 1
#define false 0



int main(int argc  ,  char *argv[])

{
	printf("Program #2 ,cssc0504 , Robert Carpenter \n");
	void primegetter(int);
	if ( argc == 1)
	{
		printf("You dingus! You didn't type anything! Try running the program again! \n");
		exit(0);
	}
	else if( argc > 2 )
	{
		printf("Two many arguments! Exiting now!");
		exit(0);
	}

	// TESTING INPUT

	char test [30];
	strcpy(test , argv[1]);



	int converted_num  = atoi(test);


	int i;
	int twochecker = atoi(argv[1]);
	bool isValid= true;
	for (i=0 ; i < strlen(argv[1]) ; i++)
 	{
		if (  ! isdigit (test[i]) || test[i] == '.' || (twochecker <= 2) || twochecker==0 )
			isValid = false;
	}
	if (isValid)
		printf("Your input is a VALID integer! The program will now continue to calculate all prime numbers up to %d\n",converted_num );
	else
	{
		printf("Invalid input! Please enter a WHOLE integer value! Program has now exited. \n");
		exit(0);
	}
	primegetter(converted_num);
	return 0;
}
void  primegetter ( int num)
{

	int currentnum=2;
	int flagger  [num+1];

	flagger [0] = 0;
	flagger [1] =0;
	int k;
	int x=2;// while iterator
	int j=2;
	flagger [2]=0; // since we know 2 is prime
	for (j=3 ; j < num+1 ; j++)
	{
		flagger[j] =0;
	}
	while (  (currentnum*2 < num) )
	{
		while (x != (num+1))
		{
			if ( x % currentnum ==0 && x!=currentnum )
			{
				flagger[x] = 1;

			}

			x++;
		}
		currentnum++;
		while ( flagger[currentnum] ==1 &&( currentnum != num+1))
		{
			currentnum++;
		}
		x= currentnum;


	}

	printf("Your primes up to %d are : \n",num);
	for (k = 2 ; k < num  ; k++)
	{
		if ( flagger [k] == 0 )
		{
			printf("%d ", k);
		}
	}


}

