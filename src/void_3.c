/* Prints Tsunami from N layers */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

DEFAULT_N = 15;
MAXIMUM_NUMBER = 25;
STR_SISE = 255;


void usage(char **argv) {
  printf("\nDraws pyramid from stars...\n\nUsage: %s <number>\n\n", argv[0]);
  return;
}

void only_positive_numbers_error() {
  printf("\nError: number passed is less than zero but only positive numbers allowed\n\n");
}

void too_high_error() {
  printf("\nError: number passed is too high, maximum number is %d\n\n", MAXIMUM_NUMBER);
}

void draw_tsunami(long long n, long long limit, char* str) {
  if(n == 0) {
    return;
  }

  long long layer_size = limit - n;

  long long counter = 0;
  
  char str_2[STR_SISE], str_3[STR_SISE];

  strcpy(str_2, "*");

  while(counter < layer_size) {
    strcat(str, str_2);
    counter += 1;
  }
  
  printf("%s\n", str);

  return draw_tsunami(n - 1, limit, str);
}

void main(int argc, char **argv) {
  char str[STR_SISE];

  if(argc == 1) {
    draw_tsunami(DEFAULT_N, DEFAULT_N, str);
    return;
  }

  if(argc > 2) {
    usage(argv);
    return;
  }

  long long n = atoi(argv[1]);

  if(n <= 0) {
    only_positive_numbers_error();
    return;
  }

  if(n > MAXIMUM_NUMBER) {
    too_high_error();
    return;
  }

  draw_tsunami(n, n, str);

  return;
}