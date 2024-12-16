# Simple DFA Algorithm

This repository contains a simple implementation of a Deterministic Finite Automaton (DFA) algorithm written in C.

## Project Structure
```
repository/
├── src/
│   └── dfa.c       # Implementation of the DFA algorithm
│   └── dfa.h       # A header file for the algorithm
├── main.c          # Entry point for the program
├── Makefile        # Build instructions
└── README.md       # Project documentation
```

## Building the Project
This project includes a `Makefile` for building and running the program.

Build the program using `make`:
   ```bash
   make
   ```
   The compiled executable will be located in the main directory as `dfa`.

## Usage
To execute the program manually, run:
```bash
./dfa <sequence>
```
- **Input:** Provide input sequence for the DFA to process.
- **Output:** The program will indicate whether the input sequence is accepted by the DFA.

## Author
Developed by Jackpie.
