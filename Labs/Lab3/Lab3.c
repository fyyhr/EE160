/** Lab 3 presentation
 * EE160 Spring 2017 Section 002
 * Author: Conner Higashino
 * Date: January 25, 2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void waitForInput();

int main() {
  system("clear");
  printf("Using scanf()\n");
  waitForInput();
  printf("scanf() can overwrite variables that have already been declared a value\n\n");
  waitForInput();
  printf("So if you already have a time variable being declared to be 10 seconds, you don't need to create a new variable called time2. You can reuse time and overwrite it with your scanf()\n");
  waitForInput();
  printf("So don't make a new variable. Got it?");
  waitForInput();
  system("clear");
  printf("Now about those five steps.  .  .Do them\n");
  waitForInput();
  printf("1. Understand");
  waitForInput();
  printf("2. Hand example");
  waitForInput();
  printf("3. ????");
  waitForInput();
  printf("4. PROFIT!!!");
  fflush(stdout);
  sleep(2);
  printf(" wait, not yet.");
  waitForInput();
  printf("\e[A\e[3C\e[9mPROFIT!!!\e[0m\n");
  printf("4real. Translate it\n");
  printf("5. Test");
  waitForInput();
  printf("6. PROFIT!!!\n");
  waitForInput();
  printf("Next week, you'll need to turn in algorithms for Lab 4");
  waitForInput();
  system("clear");
  printf("For temperature.c, be careful of what variables you use\n");
  waitForInput();
  system("clear");
  printf("To turn in for Lab 3:\n\n");
  printf("gravity.c\n");
  printf("seconds.c\n");
  printf("tip_calc.c\n");
  printf("gas.c\n");
  printf("temperature.c\n");
  waitForInput();
  return 0;
}

void waitForInput() {
  int ch;
  while ((ch = getchar()) != '\n'); //loop until newline is found
}
