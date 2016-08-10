#include <stdio.h>

int main(int argc, char *argv[])
{
	int ages[] = {22, 36, 27, 23, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

	int count = sizeof(ages)/sizeof(int);
	int i = 0;

	//using array and indexing, as usual

	for(; i < count; i++) {
		printf("%s is %d years old\n", names[i], ages[i]);
	}
	
	printf("---\n");

	//setting up pointers

	int *cur_age = ages;
	char **cur_name = names;
	char **arg = argv;
	int *narg = &argc;

	//printing using pointers

	for(i=0; i < count+1; i++) {
		printf("%s is %d years alive\nArgument is %s at location %p\nTheir num is %d\n", *(cur_name + i), *(cur_age+i), *(arg+i), arg+i, *narg);
	 }

	printf("---\n");

	//using pointers as if they were arrays

	for(i = -1; i++, i < count; ) {
		printf("%s has lived %d years\n", cur_name[i], cur_age[i]);
	}

	printf("---\n");

	//Operations between memory addresses

	for(cur_age = ages, cur_name = names; (cur_age - ages) < count; cur_age++) {
		printf("%s's age is %d\n", *cur_name, *cur_age);
	}

	return 0;
}


