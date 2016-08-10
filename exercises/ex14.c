#include <stdio.h>
#include <ctype.h>
#include <string.h>

int can_print_it(char ch);
void print_letters(char arg[], size_t len);

void print_arguments(int argc, char *argv[]) 
{
	int i = 0;
	for(; i < argc; i++) {
		size_t arg_length = strlen(argv[i]);
		print_letters(argv[i], arg_length);
	}
}

void print_letters(char arg[], size_t len)
{
	int i = 0;
	for(; i < len; i++) {

		char ch = arg[i];
		if(can_print_it(ch)) {
			printf("%c == %d ", ch, ch);
		}
	}
	printf("\n");
}

int can_print_it(char ch) 
{
	return isalpha(ch) || isdigit(ch);
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}
