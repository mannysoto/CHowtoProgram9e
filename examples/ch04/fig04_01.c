// Counter-controlled iteration.
#include <stdio.h>

int main(void) {
   int counter = 1; // initialization

   while (counter <= 5) { // iteration condition
      printf("%d  ", counter);
      ++counter; // increment
   }

   puts("");
}


