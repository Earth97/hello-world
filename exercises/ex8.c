#include <stdio.h>

int main(int argc, char *argv[])
{
	char full_name[] = {
		'Z', 'e','d',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'
	};
	int areas[] = {10, 12, 15, 18, 91};
	char name[] = "Zed";
	full_name[0] = areas[4];
	printf("The size of an int is %ld\n", sizeof(int));
	printf("The size of areas is %ld\n", sizeof(areas));
	printf("The number of ints in areas is %ld\n", sizeof(areas)/sizeof(int));
	printf("The first area is %d, the second one is %d\n", areas[0], areas[1]);
	printf("The size of a char is %ld\n", sizeof(char));
	printf("The size of name is %ld\n", sizeof(name));
	printf("The number of chars in name is %ld\n", sizeof(name)/sizeof(char));
	printf("The size of full_name is %ld\n", sizeof(full_name));
	printf("The number of chars in full_name is %ld\n", sizeof(full_name)/sizeof(char));
	printf("name is \"%c\" and full_name is \"%s\"\n", name[0], full_name);
	
	return 0;
}
	
