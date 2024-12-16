#include <stdio.h>
#include <stdlib.h>

#include "src/dfa.h"

int main(int argc, char **argv) {

	char *input = argv[1];

	if(input == NULL) {
		fprintf(stderr, "[!] No input!.\n");
		return EXIT_FAILURE;
	}

	if(check_input(input) == 1) {
		fprintf(stderr, "[!] Wrong input syntax!\n");
		return EXIT_FAILURE;
	}

	enum State current_state = q0;

	while(*input != '\0') {
		printf("%s --%c-->", get_state(current_state), *input);
		go_to_next_state(&current_state, input);
		printf(" %s", get_state(current_state));
		printf("\n");
		input++;
	}

	if(current_state != q0) {
		printf("Sequence '%s' was not accepted.\n", argv[1]);
	} else {
		printf("Sequence '%s' was accepted\n", argv[1]);
	}

	return EXIT_SUCCESS;

}
