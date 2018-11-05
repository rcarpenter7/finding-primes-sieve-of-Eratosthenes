# finding-primes-sieve-of-Eratosthenes
Calculates all prime numbers from 2 to "n" where n is supplied by the user via the command line. Please see READ ME for more info.
Here's a copy and paste of the program instructions straight from my CS 320 class:



You will write a C language program that prints out all of the prime numbers in the range [2..n].  Your program will accept a single command line argument, the integer value n which represents the end of the range.   Your program must be named p2.c  and as usual, must be copied into your handin subdirectory to be graded.

Your program will use the Sieve of Eratosthenes method for finding prime numbers.  This method may be described as follows:

First, create a list of numbers 2 .. n.  Let n = 15 as an example:

2 3 4 5 6 7 8 9 10 11 12 13 14 15

Since 2 is prime, we  flag all multiples of 2. (If it's a multiple of 2, it can't be prime!)

2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    x   x   x    x     x     x

Now we proceed to the next item in the list that it unmarked.  It will be prime.  We mark all multiples of the next prime in the list.  In this case, it is 3, so we mark 6, 9, 12, 15.  (6 and 12 are already marked).

2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    x   x   x x  x     x     x  x

We now proceed to the next unmarked number, which is prime.  We proceed to 5, and we mark 10 and 15 (already marked). 
The next number is 7, and we mark 14 (already marked).

At this point we can stop.  That's because 2 * (any number > 7) is larger than n.   (See if you can find a better stopping point).

Now, the unmarked elements are the prime numbers.  We have 2,3,5,7,11,13.

Output:

Your program will print the assignment number, your class account, and your name, all on one line.  Then you will print a line indicating the range of primes found, followed by a space separated list of primes.  You need not worry about wrapping if the output is long.  Example:

~/cs320/programs/prog2>p2 59 
Program #2, mascxxxx, John Student

Prime numbers in the range 2..59 are: 
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59


