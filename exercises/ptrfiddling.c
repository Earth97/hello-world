#include <stdio.h>

int main() {
	int arr[] = { 1, 4, 5, 8, 10 };

	int num = 5;

	int *ptr = arr;
	int *defptr = arr;
	int *ptrnum = &num;
	
	long int ptrsize = sizeof(*ptr);

	printf("ptr val is %d;\t arr address is %p;\tptr address is %p\nptrnum val is %d; \tptrnum address is %p\n", *ptr, ptr, &ptr, *ptrnum, ptrnum);
	ptr++;
	printf("ptr + 1 val is %d;\t *ptr + 1 address is %p\n", *ptr, ptr);
	//Printing new memory address
	printf("Difference between ptr and defptr: %ld\n", ptr-defptr);

	//Printing ptr size
	printf("Ptr size is %ld\n", ptrsize);

	return 0;
}
