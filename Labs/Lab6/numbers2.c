#include <stdio.h>
#define DEBUG


int main() {
  /* Initialize variables */
  int input = -1;
  int dupe;
  int count, pos, neg, even, odd, posEven, negOdd;
  int posTotal, negTotal, evenTotal, oddTotal, posEvenTotal, negOddTotal, total;

  count = pos = neg = even = odd = posEven = negOdd = 0;
  posTotal = negTotal = evenTotal = oddTotal = posEvenTotal = negOddTotal = total = 0;

  /* Get first input */
  printf("Enter your first integer to check: ");
  scanf("%d", &input);

  while (input != 0) {
    /* Only modify dupe for calculations */
    dupe = input;
    /* Increment the overall totals */
    count++;
    total += input;
    #ifdef DEBUG
      printf("Input is: %d\n", input);
      printf("Dupe is : %d\n", dupe);
    #endif
    /* Increment odd totals using using multiplaction by mod */
    odd += (input % 2) * (input % 2); /* If input is odd, result will be 1 or -1, square result 
                                       * to make it always positive
                                       */
    oddTotal += input * (input % 2) * (input % 2); /* Multiply input by result of mod squared, 
                                                    * either 0 or input
                                                    */
    #ifdef DEBUG
      printf("Odd count is: %d\n", odd);
      printf("OddTotal is: %d\n", oddTotal);
    #endif
    /* Increment even totals */
    /* dupe is a copy of input incremented by 1!!! */
    even += (++dupe % 2) * (dupe % 2); /* Same concept as odd, but add one first to make evens turn
                                        * to odds so that the result will be 1 or -1 and odds will
                                        * be even making the result 0
                                        */
    /* dupe is still input + 1!!! */
    evenTotal += input * (dupe % 2) * (dupe % 2);
    #ifdef DEBUG
      printf("Even ount is: %d\n", even);
      printf("EvenTotal is: %d\n", evenTotal);
    #endif
    
    printf("Enter your next integer to check (0 to quit): ");
    scanf("%d", &input);
  }
  printf("Here are your totals!\n");
  printf("There were %d positive numbers totaling %d\n", pos, posTotal);
  printf("There were %d negative numbers totaling %d\n", neg, negTotal);
  printf("There were %d even numbers totaling %d\n", even, evenTotal);
  printf("There were %d odd numbers totaling %d\n", odd, oddTotal);
  printf("There were %d positive even numbers totaling %d\n", posEven, posEvenTotal);
  printf("There were %d negative odd numbers totaling %d\n", negOdd, negOddTotal);
  printf("There were %d total numbers totaling %d\n", count, total);
}

