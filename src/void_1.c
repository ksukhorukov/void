#include <stdio.h>
#include <stdlib.h>

/* prints the set of digits from N to 1 in dependence of it's oddity or evennes */

DEFAULT_N = 25;

void exit_from_the_void(long long unsigned n) {
  printf("%lld ", n);

  if(n == 0) { 
   printf("\n");
   return;
  } 

  return exit_from_the_void(n - 1);
}
  
void usage(char **argv) {
  printf("\nUsage: %s <number>\n\n", argv[0]);
}

void main(int argc, char **argv) {
 long long n = 0;

 if(argc > 2) {
   usage(argv);
   return;
 } else if(argc == 2) {
   n = atoi(argv[1]); 
 } else {
   n = DEFAULT_N;
 }

 exit_from_the_void(n);
}
