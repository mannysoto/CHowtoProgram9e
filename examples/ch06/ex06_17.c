// What does this program do?
#include <stdio.h>
#define SIZE 10

int whatIsThis(const int b[], size_t p); // function prototype

int main(void) {
   // initialize array a
   int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   int x = whatIsThis(a, SIZE);
   printf("Result is %d\n", x);
} 

// what does this function do?
int whatIsThis(const int b[], size_t p) {
   if (1 == p) { // base case
      return b[0];
   } 
   else { // recursion step 
      return b[p - 1] + whatIsThis(b, p - 1);
   } 
} 



