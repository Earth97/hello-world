#include <stdio.h>

int main(int argc, char *argv[])
{

	char *santi[] = {"Mico", "Padre Pio", "Il Master", "San Sebastiano"};
	int i = argc-1;
	while(i > -1) {
		printf("arg %d: %s\n", i+1, argv[i]);
		i--;
	}
	int num_states = 4;
	i = num_states - 1;

	while(i > -1) {
		printf("Santo n°%d: %s\n", i+1, santi[i]);
		i--;
	}
	i = 0;
	while(i < argc && i < num_states) {
		santi[i] = argv[i];
		printf("Nuovo Santo n°%d: %s\n",i+1, santi[i]);
		i++;
		 
	}

	return 0;
}
