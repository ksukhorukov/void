#include <stdio.h>

/* print the set of digits from N to 1... */

void exit_from_the_void(long long unsigned n) {
  printf("%llu ", n);

  if(n == 0) { 
   printf("\n");
   return;
  } 

  return exit_from_the_void(n - 1);
}
  

void main(int argc, char **argv) {
 exit_from_the_void(1000);
}
