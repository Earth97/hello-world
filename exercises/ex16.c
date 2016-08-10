#include <stdio.h> //import the staple library
#include <assert.h> //assert checks memory and verifies that it has been allocated
#include <stdlib.h> //don't know yet
#include <string.h> //don't know yet

struct Person {//define a structure  by its name and parameters
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)//add the function "Person_create to the structure, that employs the previous parameters to create a new Person
{
	struct Person *who = malloc(sizeof(struct Person)); //take the size of struct Person and give "*who" a chunk of memory to house
	assert(who != NULL); //verify that chunk of memory is valid 

	who->name = strdup(name); //who gets a name, taken from the struct declaration and duplicated into the memory who is inhabiting
	who->age = age; //who's age
	who->height = height; //who's height
	who->weight = weight; //who's weight

	return who; //who was built; return it
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n\n", who->weight);
}

int main(int argc, char *argv[])
{
	struct Person *andrej = Person_create(
		"Andrej Gejm", 32, 64, 140);

	struct Person *konst = Person_create(
		"Konstantin Novoselov", 20, 72, 180);

	printf("Andrej is at memory location %p:\n", andrej);
	Person_print(andrej);

	printf("Konstantin is at memory location %p:\n", konst);
	Person_print(konst);

	andrej->age += 20;
	andrej->height -= 2;
	andrej->weight += 40;
	Person_print(andrej);

	konst->age += 20;
	konst->weight += 20;
	Person_print(konst);

	Person_destroy(andrej);
	Person_destroy(konst);

	return 0;
}
