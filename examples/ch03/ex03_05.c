// Calculate the sum of the integers from 1 to 10 
#include <stdio.h>

int main(void) {
   int x = 1; // set x 
   int sum = 0; // set sum 
    
   while (x <= 10) { // loop while x is less than or equal to 10 
      sum += x; // add x to sum 
      ++x; // increment x 
   } // end while 

   printf("The sum is: %d\n", sum); // display sum 
} // end main function 


