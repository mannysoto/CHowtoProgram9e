// raise x to the y power 
#include <stdio.h>

int main(void) {
   printf("%s", "Enter first integer: ");
   int x = 0; 
   scanf("%d", &x); // read value for x from user 
   printf("%s", "Enter second integer: ");
   int y = 0; 
   scanf("%d", &y); // read value for y from user 

   int i = 1; 
   int power = 1; // set power 

   while (i <= y) { // loop while i is less than or equal to y 
      power *= x; // multiply power by x 
      ++i; // increment i 
   } // end while                                        

   printf("%d\n", power); // display power 
} // end main function 


