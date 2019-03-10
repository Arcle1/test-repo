#include <stdio.h>

int main(int argc, char* argv[]) {
	if(argc == 1) {
		printf("Usage: task6.app [int int int int]\n\nArguments:\n    first section voltage\n    first section resistance\n    second section voltage\n    second second resistance\n");
		return 0;
	}
	if(argc != 5) {
		printf("Wrong number of arguments.\n");
		return -1;
	}
	char* index = atoi(argv[1])/atoi(argv[2]) < atoi(argv[3])/atoi(argv[4]) ? "First" : "Second";
	printf("A current of lesser force flows through %s\n section.", index);
	return 0;
}

