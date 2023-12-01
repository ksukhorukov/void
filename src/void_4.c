/* Prints Tsunami from N layers */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char **argv) {
  printf("Draws anime\n\nUsage: %s\n\n", argv[0]);
}

void draw_anime() {
}

void main(int argc, char **argv) {
  draw_anime();
  
  if(argc == 2 && strcmp(argv[1], "help") == 0) {
    usage(argv);
    return;
  }

  return;
}