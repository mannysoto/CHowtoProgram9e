// Randomly generate numbers between 1 and 1000 for user to guess.
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessGame(void); // function prototype
bool isCorrect(int guess, int answer); // function prototype

int main(void) {
   srand(time(0)); // seed random number generator
   guessGame();
} // end main

// guessGame generates numbers between 1 and 1000
// and checks user's guess
void guessGame(void) {
   int response; // 1 or 2 response to continue game

   // loop until user types 2 to quit game
   do {
      // generate random number between 1 and 1000
      // 1 is shift, 1000 is scaling factor
      int answer = 1 + rand() % 1000;

      // prompt for guess
      puts("I have a number between 1 and 1000.\n" 
           "Can you guess my number?\n" 
           "Please type your first guess.");
      printf("%s", "? ");
      int guess; // user's guess
      scanf("%d", &guess);

      // loop until correct number
      while (!isCorrect(guess, answer)) {
         scanf("%d", &guess);
      }

      // prompt for another game
      puts("\nExcellent! You guessed the number!\n"
         "Would you like to play again?");
      printf("%s", "Please type (1=yes, 2=no)? ");
      scanf("%d", &response);

      puts("");
   } while (response == 1);
} // end function guessGame

// isCorrect returns true if guess equals answer
// if guess does not equal answer, displays hint
bool isCorrect(int guess, int answer) {
   // guess is correct
   if (guess == answer) {
      return true;
   }

   // guess is incorrect; display hint
   if (guess < answer) {
      printf( "%s", "Too low. Try again.\n? " );
   }
   else {
      printf( "%s", "Too high. Try again.\n? " );
   }

   return false;
} // end function isCorrect



