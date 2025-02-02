// Using the continue statement in a for statement.
#include <stdio.h>

int main(void) {
   // loop 10 times
   for (int x = 1; x <= 10; ++x) {
      // if x is 5, continue with next iteration of loop
      if (x == 5) {
         continue; // skip remaining code in loop body
      }

      printf("%d ", x);
   }

   puts("\nUsed continue to skip printing the value 5");
}


