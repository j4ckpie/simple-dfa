#include <stdio.h>
#include "dfa.h"

char* get_state(enum State state) {
	switch(state) {
		case q0:
			return "q0";
		case q1:
			return "q1";
		case q2:
			return "q2";
		case q3:
			return "q3";
	}
	return NULL;
}

int check_input(char *input) {
	while(*input != '\0') {
		if(*input != '0' && *input != '1') {
			return 1;
		}
		input++;
	}
	return 0;
}

void go_to_next_state(enum State *state, char *input) {
	switch(*state) {
		case q0:
			if(*input == '1') {
				*state = q1;
			} else {
				*state = q2;
			}
			break;
		case q1:
			if(*input == '1') {
				*state = q0;
			} else {
				*state = q3;
			}
			break;
		case q2:
			if(*input == '1') {
				*state = q3;
			} else {
				*state = q0;
			}
			break;
		case q3:
			if(*input == '1') {
				*state = q2;
			} else {
				*state = q1;
			}
			break;
	}
}