#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char EVEN[] = "even";
const char ODD[] = "odd";

void print_odd(long long unsigned int n) {
  return;
}

void print_even(long long unsigned int n) {
  return;
}

void usage(char **argv) {
  printf("\nUsage: odd|even <number>\n", argv[0]);
  printf("\nExample: even 1000\n\n", argv[0]);
  return;
}

void only_odd_or_even_error(char **argv) {
  printf("Error: only 'odd' or 'even' values are allowed as the first parameter");
  usage(argv);
  return;
}

void main(int argc, char **argv) {
  if(argc == 1 || argc >= 3) {
    usage(argv);
    return;
  }

  char* _type = argv[1];

  if(_type != EVEN && _type != ODD) {
    only_odd_or_even_error(argv);
    return;
  }

  long long unsigned int n = atoi(argv[2]);

  if(_type == EVEN) {
    print_even(n);
    return;
  } else if(_type == ODD) {
    print_odd(n);
    return;
  }

  return;
}