#include <stdio.h>

int main(int argc, char *argv[])
{

	char *santi[] = {"Padre Pio", "Il Master", "San Sebastiano"};
	argv[0] = santi[1];
	santi[2] = argv[1];

	int i = 0;
	for(; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	int num_states = 4;

	for(i = 0; i < num_states; i++) {
		printf("Santo n°%d: %s\n", i+1, santi[i]);
	}

	printf("Argv address is %x, santi address is %x\n", &argv, &santi);

	return 0;
}
