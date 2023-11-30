/* Prints the set of digits from N to 1 */

#include <stdio.h>
#include <stdlib.h>

DEFAULT_N = 20;

void exit_from_the_void(long long unsigned n) {
  printf("%c[1;33m%lld ", 27, n);

  if(n == 1) { 
   printf("\n");
   return;
  } 

  return exit_from_the_void(n - 1);
}
  
void usage(char **argv) {
  printf("%c[1;33m\nUsage: %s <number>\n\n", 27, argv[0]);
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
