#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc == 2) {
		printf("You only have one argument. You suck.\n");
	} else if(argc > 2 && argc < 5) {
		printf("Here's your arguments:\n");
		for(int i = 0; i++, i < argc;) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else if(argc == 1) {
		printf("No arguments\n");
	} else {
		printf("There are too many arguments. You suck.\n");
	}

	return 0;
}
