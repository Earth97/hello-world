#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int a = 1;
	for(; a < argc; a++) {
		
		for(char literal = '\0'; literal = argv[a][i], literal != '\0'; i++) {

			if (literal < 97) {
				literal = literal + 32;
			}

			switch(literal) {
				case 'a':
					printf("%d: A\n", i);
					break;
				case 'e':
					printf("%d: E\n", i);
					break;
				case 'i':
					printf("%d: I\n", i);
					break;
				case 'o':
					printf("%d: O\n", i);
					break;
				case 'u': 
					printf("%d: U\n", i);
					break;
				default: 
					printf("%d: %c is not a vowel\n", i, literal-32);
			}
		}
		i = 0;
		printf("\n");
	}
	return 0;
}
