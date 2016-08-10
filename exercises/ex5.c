#include <stdio.h> //Here I'm including a set of functions (a basic one, in this case);

int main(int argc, char *argv[]) //Here I'm declaring the argument count and an array of strings; main is the function to be executed;
{
	/* This is a comment */
	int distance = 100;
	// This is also a comment
	printf("You are %d miles away\n", distance);

	return 0; //Here I'm returning a value to UNIX, to let him know that my program is over and, if it was executed, that it went without fail.
}

