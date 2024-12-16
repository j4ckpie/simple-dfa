enum State {
    q0,
    q1,
    q2,
    q3
};

char* get_state(enum State);

int check_input(char*);

void go_to_next_state(enum State*, char*);