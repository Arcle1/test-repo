#include <stdio.h>

int main(int argc, char* argv[]) {
	if(argc != 5) {
		printf("Wrong number of arguments.\n");
		return -1;
	}
	char* index = atoi(argv[1])/atoi(argv[2]) < atoi(argv[3])/atoi(argv[4]) ? "First" : "Second";
	printf("%s\n", index);
	return 0;
}

