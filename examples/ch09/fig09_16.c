// Using an inverted scan set
#include <stdio.h>

int main(void) {
   char z[9] = ""; 

   printf("%s", "Enter a string: ");
   scanf("%8[^aeiou]", z); // inverted scan set

   printf("The input was \"%s\"\n", z);
} 



