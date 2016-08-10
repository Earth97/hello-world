#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *arr[] = {"Mico", "Il master","NEW", "GG"};//STRING IS 8 BYTE;
	int i = 31;
	

	printf("The arr size is %ld\n", sizeof(arr));
	printf("Random size is %ld\n", sizeof(i));
	printf("strlen returns %ld for string 0, %ld for string 1, %ld for string 2\n", strlen(argv[0]), strlen(argv[1]), strlen(argv[2]));

	return 0;
}
