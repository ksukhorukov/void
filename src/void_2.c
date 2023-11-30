/* Prints the set of digits from N to 1 and filters numbers by oddity or evennes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char EVEN[] = "even";
const char ODD[] = "odd";

void print_odd(long long n) {
  if(n == 0) {
    printf("\n");
    return;
  }

  if(n % 2 == 1) {
    printf("%lld ", n);
  } 

  return print_odd(n - 1);
}

void print_even(long long n) {
  if(n == 0) {
    printf("\n");
    return;
  }

  if(n % 2 == 0) {
    printf("%lld ", n);
  } 

  return print_even(n - 1);
}

void usage(char **argv) {
  printf("\nUsage: %s odd|even <number>\n", argv[0]);
  printf("\nExample: %s even 1000\n\n", argv[0]);
  return;
}

void only_odd_or_even_error(char **argv) {
  printf("\nError: only 'odd' or 'even' values are allowed as the first parameter\n\n");
  usage(argv);
  return;
}

void only_positive_numbers_error() {
  printf("\nError: number passed is less than zero but only positive numbers allowed\n\n");
}

void main(int argc, char **argv) {
  if(argc != 3) {
    usage(argv);
    return;
  }

  char* _type = argv[1];

  if((strcmp(_type, EVEN) != 0) && (strcmp(_type, ODD) != 0)) {
    only_odd_or_even_error(argv);
    return;
  }

  long long n = atoi(argv[2]);

  if(n <= 0) {
    only_positive_numbers_error();
    return;
  }

  if(strcmp(_type, EVEN) == 0) {
    print_even(n);
  } else {
    print_odd(n);
  }

  return;
}