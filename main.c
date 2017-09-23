#include "hello.h"

int main(int argc, char **argv)
{
	int i = 0, N = 1;
	if (argc == 2){
		N = argv[1][0] - '0';
	}
	for (i = 0; i < N; i++){
		HelloFunc();
	}
	return 0;
}