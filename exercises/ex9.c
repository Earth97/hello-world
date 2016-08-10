#include <stdio.h>

int main(int argc, char *argv[])
{
	int num[4] = {'x', 'y', 'a', 'b'};
	char *name[4] ={'x', 'y', 'a', 'b'};
	int numb = 98;

	printf("Test %c %c %c %c\n", num[0], num[1], num[2], num[3]);
	printf("Test charint %d %d %d %d\n", name[0], name[1], name[2], name[3]);
	printf("Test name %s\n", name);
	printf("Char turned into int is %d\n", num); 
	printf("Name from int is %c\n", numb); 

	return 0;
}
