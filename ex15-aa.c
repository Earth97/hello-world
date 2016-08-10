#include <stdio.h>

int main(int argc, char *argv[])
{
	int ages[] = {22, 36, 27, 23, 2};
	char *names[] = {"Alanasfdfffffffaadffdafdafdafdafdafdfdafdafda", "Frank", "Mary", "John", "Lisa"};

	int count = sizeof(ages)/sizeof(int);
	int i = 0;
	char **cur_name = names;
	int *cur_age = ages;

	//using array and indexing, as usual

	for(; i < count; i++) {
		printf("%s is %d years old\n", names[i], ages[i]);
	}
	
	printf("---\n");

	//setting up pointers


	//printing using pointers

	for(i=0; i < count+1; i++) {
		printf("%s is %d years alive\n", names[i], ages[i]);
	 }

	printf("---\n");

	//using pointers as if they were arrays

	for(i = -1; i++, i < count; ) {
		printf("%s has lived %d years\n", names[i], ages[i]);
	}

	printf("---\n");

	//Operations between memory addresses

	for(cur_age = ages, cur_name = names; (cur_age - ages) < count; cur_age++, cur_name++) {
		printf("%s's age is %d\ncur_name is pointing at %p\n", names[cur_age - ages], ages[cur_age - ages], cur_name);
	}

	return 0;
}


