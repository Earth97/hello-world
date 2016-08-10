#include <stdio.h>


int ages[] = {22, 36, 27, 23, 2};
char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

int count = sizeof(ages)/sizeof(int);
int i = 0;

//using array and indexing, as usual

void printusingarray(int ages[], char *names[]) {
	for(; i < count; i++) {
		printf("%s is %d years old\n", names[i], ages[i]);
	}

	printf("---\n");
}

//setting up pointers

//NOT REQUIRED HERE

//printing using pointers

void printusingpointers(int *cur_age, char **cur_name) {
	for(i=0; i < count; i++) {
		printf("%s is %d years alive\n", cur_name[i], cur_age[i]);
	 }
	printf("---\n");
}

//using pointers as if they were arrays

void arrpoint(int *cur_age, char **cur_name) {
	for(i = -1; i++, i < count; ) {
		printf("%s has lived %d years\n", cur_name[i], cur_age[i]);
	}
	printf("---\n");
}

//Operations between memory addresses

void operationspoint(int *cur_age, char **cur_name) {
	for(cur_age = ages, cur_name = names; (cur_age - ages) < count; cur_age++, cur_name++) {
		printf("%s's age is %d\n", *cur_name, *cur_age);
	}
}


int main(int argc, char *argv[])
{
	printusingarray(ages, names);
	printusingpointers(ages, names);
	arrpoint(ages, names);
	operationspoint(ages, names );

	return 0;
}
